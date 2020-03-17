       #include <sys/types.h>
       #include <unistd.h>
	#include<stdio.h>
void main()
{
	int ppid,cpid,check;
	ppid=getppid();
	printf("Parent process id : %d \n",ppid);
	check=fork();
	if (check==0)
{
	cpid=getpid();
	printf("Child process id : %d \n",cpid);
}
}
