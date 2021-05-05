#include <stdio.h>
#include <sys/statvfs.h>


int main()
{
	struct statvfs buff;
	
	if (statvfs(".", &buff) == -1)
		perror("error");
	else
	{
		printf("each block has a size of %ld bytes\n", buff.f_frsize);
		printf("there are %ld blocks available out of %ld\n", buff.f_bavail, buff.f_blocks);
	}

}

