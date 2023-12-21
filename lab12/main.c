#include "sys.h"

char hello[] = "Hello World!\n";

int main();

// Setup the entry point
void entry()
{
    asm("lui sp, 0x00120"); // Set stack to the high address of the dmem
    asm("addi sp, sp, -4");
    main();
}

int main()
{
    vga_init();
    putstr(hello);

    while (1)
    {
        // Your code here
    }

    // You may want to return something here, e.g., return 0;
}
