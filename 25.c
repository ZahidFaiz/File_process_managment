       #include <sys/types.h>
       #include <sys/wait.h>
       #include <unistd.h>
       #include <stdio.h>
	#include<stdlib.h>
void main ()
{
	int status,cpid;
	int i=0;
	int pid[3];
	for(;i<3;i++)
	{
	

		if((pid[i]=fork())==0)
		{ sleep(10);
			exit(0);
		printf("ended successfully \n");
		}
	}

		
		cpid=waitpid(pid[2],&status,0);
		printf("cpid is %d",cpid);
}



