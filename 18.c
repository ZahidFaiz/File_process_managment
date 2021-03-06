#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


int main(int argc, char **argv)
{
	int fd=open(argv[1],O_WRONLY);
	struct flock lock;
	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=0;
	lock.l_len=10;			//modifying the length to lock a part of the file 
	lock.l_pid=getpid();
	fcntl(fd, F_SETLKW, &lock);
	printf("Locked \nPress enter to unlock \n");
getchar();
	 lock.l_type = F_UNLCK;
	 fcntl (fd, F_SETLKW, &lock);
	printf("unlocked \n");
}





