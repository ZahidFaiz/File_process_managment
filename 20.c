       #include <sys/time.h>
       #include <sys/resource.h>
       #include <sys/types.h>
       #include <unistd.h>
#include<stdio.h>	
void main()
{
//	int which,who;
	int niceval;
	 int pid = getpid();
	niceval= getpriority(PRIO_PROCESS,pid);
	printf("%d \n",niceval);
	nice(9);
        printf("Modified  Priority : %d\n",getpriority(PRIO_PROCESS,pid));
}
