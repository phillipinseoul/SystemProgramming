#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int num, i, sum=0;
	
	num=8;
	printf("We have 8 elements to allocate memory to\n", num);
	
	// ptr = (cast-type*) calloc(byte-size, element-size)
	
	ptr = (int*)calloc(num, sizeof(int));
	
	if (ptr == NULL)
	{
		printf("Memory allocation failed!");
		exit(0);
	} 
	else
	{
		printf("Memory allocation has been successful using calloc\n");
	}
	
	free(ptr);
	printf("Calloc or contagious memory has been freed or de-allocated\n");
	
	
	
/*	for (i=0; i < num; ++i)
	{
		ptr[i] = i + 1;
	}
	
	printf("inserted 8 elements in the block are as follows:\n");
	for (i=0; i < num; ++i)
	{
		printf("%d, ", ptr[i]);
	}	*/
	
}



