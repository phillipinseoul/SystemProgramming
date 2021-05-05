#include <stdio.h>
#include <stdlib.h>

struct threeNumb
{
	int num1, num2, num3;
};

int main()
{
	int num;
	struct threeNumb number;
	FILE *fptr;
	
	if ((fptr = fopen("program.bin", "rb")) == NULL)
	{
		printf("ERROR OPENING FILE! ");
		exit(1);
	}
	
	for(num=1; num < 5; ++num)
	{
		number.num1 = num;
		number.num2 = 2*num;
		number.num3 = 2*num + 3;
		
		fread(&num, sizeof(struct threeNumb), 1, fptr);
		printf("num1: %d\tnum2: %d\tnum3: %d\n", number.num1, number.num2, number.num3);
	}
	
	fclose(fptr);
}

