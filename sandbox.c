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


#include <sys/ucontext.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sched.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/mman.h>

struct sigaction sig;
long return_value;

extern int main(int argc, char *argv[]);
extern void readString(char *s, int r);
void sig_handler(int ssignal, siginfo_t* sig, void* context){

	if(&readString== ((unsigned long)(sig->si_addr)))
	{
		
		mprotect((void*)(((unsigned int)(sig->si_addr))& 0xfffffffffffff000), 1,
            PROT_READ | PROT_WRITE  | PROT_EXEC ); 

		mcontext_t mcontext = ((ucontext_t*)context)->uc_mcontext;
		unsigned long *retv;
		retv= (unsigned long *)mcontext.gregs[15];
		return_value = *retv;
		//printf("retv:%x\n", *retv);
		mprotect((void*)((*retv)& 0xfffffffffffff000), 1,
            PROT_READ | PROT_WRITE ); 
		//printf("retv:%x\n",*retv);


	}
	else{
		//printf("\nIn Main sig part\n");
		//printf("retv:%x\n", *retv);
		//printf("retv:%x\n",*retv);
		//printf("%x\n", ((unsigned long)(sig->si_addr)) );


		if(((unsigned long)(sig->si_addr)) != return_value){
			printf("malicious buffer overflow detected, will exit!\n");
			exit(0);

		}

		mprotect((void*)((unsigned int)(sig->si_addr)& 0xfffffffffffff000), 1,
            PROT_READ | PROT_WRITE | PROT_EXEC); 
		mprotect((void*)((unsigned long)&readString & 0xfffffffffffff000), 1,
            PROT_READ | PROT_WRITE ); 

	}

}

void init_sandbox(void)
	{
		sigset_t m;
		mprotect((void*)((unsigned long)&readString & 0xfffffffffffff000), 1,
            PROT_READ | PROT_WRITE ); 

        memset(&sig,0,sizeof(sig));
        sigemptyset(&m);
        sigaddset(&m,SIGSEGV);
        sig.sa_flags = SA_SIGINFO |SA_RESTART;
        sig.sa_mask = m;
        sig.sa_sigaction = &sig_handler;
        sigprocmask(SIG_UNBLOCK, &m, NULL);
        sigaction(SIGSEGV , &sig ,NULL);
	}
