       #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
       #include <unistd.h>
void main()
{
	struct database
	{
		int ticketno;
	};
	struct database db;
	db.ticketno=1;

	int fd=open("database",O_RDWR|O_CREAT,0744);
	write(fd,&db,sizeof(db));
	close(fd);
	
	fd=open("database",O_RDONLY);
	read(fd,&db,sizeof(db));

	printf("ticket no : %d",db.ticketno);
	close(fd);
	
}



