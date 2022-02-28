#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	printf("we are in 2p.c\n");
	printf("PID of 2p.c= %d PPID of 2p.c %d \n",getpid(),getppid());	
	return 0;
}
