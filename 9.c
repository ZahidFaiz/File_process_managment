	 #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>

	#include<stdio.h>
int main()
{
struct stat st;
int fd;
fd = open("test2.txt",O_RDONLY);
printf("fd= %d \n",fd);
fstat(fd, &st);
perror("");
	printf("inode: %ld \n",(long)st.st_ino);
	printf("hardlinks: %lu \n",st.st_nlink);
	printf("uid :%u \n",st.st_uid);	

	printf("gid: %u \n",st.st_gid);
	printf("size: %ld\n ",st.st_size);
	printf("block size: %ld \n",st.st_blocks);
	struct timespec s =st.st_atim;
	printf("time of last access: %lu\n",s.tv_sec);
	s=st.st_mtim;
	printf("time of last modification: %lu\n",s.tv_sec);
	s= st.st_ctim;
	printf("time of last change :  %lu\n",s.tv_sec);
return 0;
}
