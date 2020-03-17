       #include <sys/types.h>
       #include <unistd.h>
	#include<stdio.h>
	#include <sys/stat.h>
	#include<stdlib.h>


int main ( )
{
if ( ! fork ( ) )
{	

	
	setsid ( ) ;
	chdir ( " / " ) ;
	umask ( 0 ) ;
	printf("deamon process");
	system("bash script.sh")
return 0;
}
else
exit ( 0 );
}

