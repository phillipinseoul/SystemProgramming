#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>


int main()
{
	char new_file[] = "/home/yuseung/Desktop/SystemProgramming/NewFolder/new.txt";
	char new_dir[] = "/home/yuseung/Desktop/SystemProgramming/NewFolder";
	unlink(new_file);
	
	if (rmdir(new_dir) != 0)
		perror("rmdir() error\n");
	else
		puts("removed!\n");
	

}

