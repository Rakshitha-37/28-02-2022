#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	printf("PID of 1p.c= %d PPID of 1p.c %d \n",getpid(),getppid());
	char *args[]={"HELLO","TS",NULL};
	execl("./exec2",args);
	printf("Back to 1p.c\n");
	return 0;
}
