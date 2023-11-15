
// opcode
`define ADD     5'b00000
`define SUB     5'b10000
`define AND     5'b00111
`define SLT     5'b00010
`define SLTU    5'b00011
`define OR      5'b00110
`define XOR     5'b00100
`define SLL     5'b00001
`define SRL     5'b00101
`define SRA     5'b10101
`define MUL     5'b01000
`define MULH    5'b01001
`define MULHSU  5'b01010
`define MULHU   5'b01011
`define DIV     5'b01100
`define DIVU    5'b01101
`define REM     5'b01110
`define REMU    5'b01111

// branch
`define BEQ             3'b000
`define BNE             3'b001
`define BLT             3'b100
`define BGE             3'b101
`define BLTU            3'b110
`define BGEU            3'b111
`define JAL             5'b11111
`define JALR            5'b11011

// memory opcode
`define NO_ACCESS       5'b00000
`define LOAD_B          3'b000
`define LOAD_UB         3'b100
`define LOAD_H          3'b001
`define LOAD_UH         3'b101
`define LOAD_W          3'b010
`define STORE_B         3'b000
`define STORE_H         3'b001
`define STORE_W         3'b010
`define LOAD_BIT        3
`define STORE_BIT       4

// ALU SR
`define SRC1_REG1        2'h0
`define SRC1_PC          2'h1
`define SRC1_ZERO        2'h2
`define SRC2_REG2        2'h0
`define SRC2_IMM         2'h1
`define SRC2_FOUR        2'h2
`define SRC2_CSR         2'h3

// Writeback
`define FROM_ALU         1'h0
`define FROM_MEM         1'h1
`define FROM_CSR         1'h0

// CSR
`define CSR_MSTATUS     12'h300
`define CSR_MIE         12'h304
`define CSR_MTVEC       12'h305
`define CSR_MEPC        12'h341
`define CSR_MCAUSE      12'h342
`define CSR_MIP         12'h344

// CSR Bits
`define UIE             0
`define SIE             1
`define MIE             3
`define UPIE            4
`define SPIE            5
`define MPIE            7
`define MTIP            7
`define MTIE            7

// Privilege Vector

`define ECALL           0
`define MRET            1
`define FENCEI          2
`define CSR_RW          3

//Exception
`define EXC_INST_ADDR_MISALIGNED    0
`define EXC_INST_ACCESS_FAULT       1
`define EXC_ILLEGAL_INST            2
`define EXC_BREAKPOINT              3
`define EXC_LOAD_ADDR_MISALIGNED    4
`define EXC_LOAD_ACCESS_FAULT       5
`define EXC_STORE_ADDR_MISALIGNED   6
`define EXC_STORE_ACCESS_FAULT      7
`define EXC_ECALL                   8

//Mode
`define MODE_U  0
`define MODE_S  1
`define MODE_H  2
`define MODE_M  3

//
`define INST_ECALL 32'h0000_0073
`define INST_MRET  32'h3020_0073
