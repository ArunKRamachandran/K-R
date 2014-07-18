#include<stdio.h>

unsigned getbits(unsigned x, int p, int n);

main()
{
	int x, r;
	printf("\nEnter a no.\n");
	scanf("%d", &x);
	r = getbits(x, 6, 4);
	printf("\n%d", r);
}

/* getbits */ 
unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p + 1 - n)) & ~(~0 << n);
}
