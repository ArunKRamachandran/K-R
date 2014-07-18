#include<stdio.h>

int bitcount (unsigned x);

main()
{
	unsigned x;
	int nb;

	printf("\nEnter a number : ");
	scanf("%u", &x);
	
	nb = bitcount (x);
	printf("\nThe no of 1's in the given no. : %d", nb);
}
int bitcount (unsigned x)
{
	int b;
	
	for (b = 0; x != 0; x &= (x - 1))
		++b;
	return b;
}
