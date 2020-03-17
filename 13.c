	#include <sys/select.h>
	#include <sys/time.h>
        #include <sys/types.h>
        #include <unistd.h>
	#include<stdio.h>

void main ()
{
	int retval;
	struct timeval tv;
	fd_set rfs;

	FD_ZERO(&rfs);
        FD_SET(0, &rfs);
	
	tv.tv_sec=10;
	tv.tv_usec=0;
	
	retval = select(1, &rfs, NULL, NULL, &tv);
	if (retval == -1)
               perror("select()");
           else if (retval!=0)
               printf("Data is available\n");
           else
               printf("No data within ten seconds.\n");

	
}
