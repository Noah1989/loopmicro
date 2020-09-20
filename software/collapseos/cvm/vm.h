#include <stdint.h>
#include <stdbool.h>

// sync with common.fs
#define SP_ADDR 0xfffa
#define RS_ADDR 0xff00
#define SYSVARS RS_ADDR-0xb0
#define MEMSIZE 0x10000

typedef uint8_t byte;
typedef uint16_t word;
// Native words in this C Forth VMs are indexed in an array. The word in memory
// is the typical 0x00 to indicate native, followed by an index byte. The
// Execute routine will then know which native word to execute.
typedef void (*NativeWord) ();
typedef byte (*IORD) ();
typedef void (*IOWR) (byte data);

typedef struct {
    byte mem[MEMSIZE];
    word SP; // parameter Stack Pointer
    word RS; // Return Stack pointer
    word IP; // Interpreter Pointer
    // A list of native words' code. This is filled in VM_init() by calls to
    // native(). The order is very important because we refer to these elements
    // by index. For example, "0x42 CODE FOO" in Forth creates the native word
    // FOO which, when executed, will call the code at index 0x42 in this array.
    NativeWord nativew[0x100];
    byte nativew_count;
    // Array of 0x100 function pointers to IO read and write routines. Leave to
    // NULL when IO port is unhandled.
    IORD iord[0x100];
    IOWR iowr[0x100];
    // Used for keeping track of max RS and min SP during the lifetime of the
    // program. Useful for debugging.
    word maxRS;
    word minSP;
    bool running;
    bool carry; // flag for CARRY?
} VM;

VM* VM_init(char *bin_path, char *blkfs_path);
void VM_deinit();
bool VM_steps(int n);
word VM_PS_pop();
void VM_PS_push(word n);
void VM_memdump();
void VM_debugstr(char *s);
void VM_printdbg();
