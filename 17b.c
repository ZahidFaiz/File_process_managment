       #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
	#include<stdio.h>		
       #include <unistd.h>
void main()
{
        struct database
        {
                int ticketno;
        };
        struct database db;
	struct flock lock;
        db.ticketno=1;

        int fd=open("database \n",O_RDWR);
	read(fd,&db,sizeof(db));

	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=0;
	lock.l_len= 0;
	lock.l_pid=getpid();

	printf("Protected data \n");	
	fcntl(fd, F_SETLKW, &lock);
	
	printf("current ticket number : %d \n", db.ticketno);
	db.ticketno++;

	lseek(fd,2, SEEK_SET);
	printf("press enter unlock \n");
	getchar();
	write(fd,&db,sizeof(db));

	
	
	getchar();
        lock.l_type=F_UNLCK;
	fcntl(fd, F_SETLKW,&lock);

	printf("unlocked \n");
	
	close(fd);

        fd=open("database",O_RDONLY);

        printf("ticket no : %d \n",db.ticketno);
        close(fd);

}
