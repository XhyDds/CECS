#include <debug.h>
#include <proc.h>
#define ECALL_FROM_M 0xb
#define INST_ALLIGN 0x1
#define INST_INVALID 0x2
#define LD_ALLIGN 0x3
#define ST_ALLIGN 0x4
#define U_CSR_RW 0x5
#define SYSCALL_YIELD 0xffffffff

void syscall_handle(Context *c);
static Context* __event_handle(Event e, Context* c);

Context* __irq_handle(Context *c) {
  Event ev = {0};
  switch (c->mcause) {
    case INST_ALLIGN: {
        Log("Instruction address misaligned");
        ev.event = EVENT_ERROR; break;
    }
    case INST_INVALID: {
        Log("Instruction fault");
        ev.event = EVENT_ERROR; break;
    }
    case LD_ALLIGN: {
        Log("Load address misaligned");
        ev.event = EVENT_ERROR; break;
    }
    case ST_ALLIGN: {
        Log("Store address misaligned");
        ev.event = EVENT_ERROR; break;
    }
    case U_CSR_RW: {
        Log("U-mode csr read/write");
        ev.event = EVENT_ERROR; break;
    }

    // Lab7 TODO: implement EVENT_SYSCALL and EVENT_YIELD
    case ECALL_FROM_M: {
      switch(c->gpr[17]){
        case SYSCALL_YIELD: ev.event = EVENT_YIELD; break;
        default: ev.event = EVENT_SYSCALL; break;
      } break;
    }

    default: ev.event = EVENT_ERROR; break;
  }
//   Log("a7:%d",c->gpr[17]);
//   Log("event:%d",ev.event);
  c = __event_handle(ev, c);
  assert(c != NULL);
  return c;    
}


static Context* __event_handle(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD:
      c->mepc += 4;
      break;
    case EVENT_SYSCALL:
      syscall_handle(c);
      c->mepc += 4;
      break;
    case EVENT_ERROR:
      Log("Error: %d", c->mcause);
      halt(1);
      break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

extern void __trap_vector(void);

void yield() {
  asm volatile("li a7, -1; ecall");
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  asm volatile("csrw mtvec, %0" : : "r"(__trap_vector));
}
