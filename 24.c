#include<stdio.h>
#include<stdlib.h>
       #include <sys/types.h>
       #include <unistd.h>
#include <sys/wait.h>
void main()
{
	int pid;

	pid=fork();
	if(pid>0)
	{
	printf("press enter before 10 seconds to kill parent \n");
        getchar();
	exit(0);
	}
	if(pid==0)
	{
		printf("child process is under execution \n");
		sleep(10);
		printf("Child is now orphan \n");
	}
	return 0;
	
}
