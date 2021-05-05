#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/utsname.h>

int main()
{
	struct utsname buff;
	
	errno=0;
	if (uname(&buff) != 0)
	{
		perror("uname doesn't return 0, so there is an error");
		exit(EXIT_FAILURE);
	}
	
	printf("System Name = %s \n", buff.sysname);
	printf("Node Name = %s \n", buff.nodename);
	printf("Release = %s \n", buff.release);
	printf("version = %s \n", buff.version);
	printf("machine = %s \n", buff.machine);
	
}
