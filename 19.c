#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include <time.h>

int main(){
	
	clock_t start, end;
     	double cpu_time_used;
     	start = clock();
        int pid = getpid();

     	end = clock();
     	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("pid is: %d \n",pid);
	printf("Time teken = %f second \n",cpu_time_used);
	return 0;
}



