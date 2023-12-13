#include <unistd.h>
#include <stdio.h>

int main() {
  write(1, "Hello World!\n", 13);

    // //指令不对齐
    // asm volatile("li a0, 0x80000001");
    // asm volatile("jalr a0, a0, 0");

    // //指令不存在
    // asm volatile(".word 0x80000001");

    // //umode csrr
    // asm volatile("csrw mstatus, x0");
    // asm volatile("csrr a0, mstatus");

    // //umode csrw
    // asm volatile("csrw mstatus, x0");
    // asm volatile("csrw mstatus, x0");

    // // store未对齐
    // asm volatile("li a0, 0x80000001");
    // asm volatile("sw a0, 0(a0)");

    // // load未对齐
    // asm volatile("li a0, 0x80000001");
    // asm volatile("lw a0, 0(a0)");

  int i = 2;
  volatile int j = 0;
  while (1) {
    j ++;
    if (j == 10000) {
      printf("Hello World from Navy-apps for the %dth time!\n", i ++);
      j = 0;
    }
  }
  return 0;
}
