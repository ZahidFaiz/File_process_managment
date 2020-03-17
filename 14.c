 	#include <sys/types.h>
        #include <sys/stat.h>
        #include <fcntl.h>
	#include <unistd.h>
	#include<stdio.h>
int main(int argc, char** argv)
{
struct stat st;
int fd;
printf("%s \n",argv[1]);
	
	perror("");
		stat(argv[1], &st);
			if (S_ISREG(st.st_mode))
		       	       	{
					printf("regular file \n");
			           }

			else if (S_ISSOCK(st.st_mode))
                                {
                                        printf("socket file \n");
                                   }
			else if (S_ISLNK(st.st_mode))
                                {
                                        printf("LINK file \n");
                                   }
			else if (S_ISBLK(st.st_mode))
                                {
                                        printf("BLOCK file \n");
                                   }
			else if (S_ISDIR(st.st_mode))
                                {
                                        printf("DIRECTORY \n");
                                   }
			else if (S_ISCHR(st.st_mode))
                                {
                                        printf("CHARACTER DEVICE \n");
                                   }
			else if (S_ISFIFO(st.st_mode))
                                {
                                        printf("FIFO(named pipe) \n");
                              	}
			else printf("not able to compare \n");		
//printf("file type is : %d",st.st_mode);
}

