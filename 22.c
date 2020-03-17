       #include <sys/types.h>
       #include <unistd.h>
	#include<stdio.h>
	#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
void main()
{	char buff1[13]={"test by child"};
	char buff2[14]={"test by parent"};
	int ppid,cpid,check;
	ppid=getppid();
	int fd=creat("test3.txt",S_IRWXU);
	printf("Parent process id : %d \n",ppid);
	check=fork();
	if (check==0)
{
	
	cpid=getpid();
	printf("Child process id : %d \n",cpid);
	write(fd,buff1,13);

}

else
{
write(fd,buff2,14);
}
}
