#include<stdio.h>
       #include <sys/types.h>
       #include <unistd.h>
#include <sys/wait.h>


void main ()
{	int pid;

	pid=fork();
	if(pid==0)
	{
		printf("child process is under execution \n");
	}
	else 
	{
		printf("now parent sleeps child completion is ignored \n");

		sleep(6);
		printf("Zombie process created \n Press enter to clear Zombie process ");
		
		getchar();
		wait(0);
	}

}
