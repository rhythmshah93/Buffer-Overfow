#include <stdio.h>

void main()
{
	printf("abdmb");
__asm__("movq   $0x42,(0x600d84)");
__asm__("movq $0x400803,%rax");
__asm__("jmp *%rax");
//__asm__("mov   %eax, (0x40081a)");
//__asm__("jmp %eax");
}
