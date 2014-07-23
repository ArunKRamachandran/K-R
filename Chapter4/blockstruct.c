#include<stdio.h>
main()
{
	int i = 5, n = 9;

	printf("i outside : %d", i);
	printf("\n");	
	if (n > 0) {
		int  i = 10;

		printf("i inside : %d", i);
	}
	printf("\n");
	printf("i after loop (expected  value - 5) : %d", i);
} 

	
