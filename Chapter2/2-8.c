#include<stdio.h>

unsigned rightrot (unsigned x, int n);

main()
{
	unsigned x, shift;
	int n;

	printf("\nEnter a number : ");
	scanf("%u", &x);
	printf("\nEnter no of positions to be right shifted : ");
	scanf("%d", &n);
	
	shift = rightrot (x,n);
	
	printf("\nNo. entered by you after right shifted : %u", shift);
	
}

unsigned rightrot (unsigned x, int n)
{
	unsigned y, copy;
	
	copy = x;
	y = copy >> n;
	return ( y | ((x & ((~ ( ~0 << n)))) << ((sizeof (int) * 8) - n)) );
}
	
