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
	lock.l_len= 0;
	lock.l_pid=getpid();
	fcntl(fd, F_SETLKW, &lock);

	printf("Locked \nPress enter to unlock \n");
getchar();
	 lock.l_type = F_UNLCK;
	 fcntl (fd, F_SETLKW, &lock);
	printf("unlocked \n");
}











/* Mount the partition and create a file with the mandatory locking enabled:
$ mkdir dir
$ mount -t tmpfs -o mand,size=1m tmpfs ./dir
$ echo hello > dir/lockfile
$ chmod g+s,g-x dir/lockfile

execute the program passing the file in command line arguments


Try to read the file in the second terminal:

$ cat dir/lockfile
(hangs until ^C is pressed in the first terminal)
hello

*/
