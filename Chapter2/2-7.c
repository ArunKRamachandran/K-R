#include<stdio.h>

unsigned invert(unsigned x, int p, int n);

main()
{
	unsigned x, invrt;
	int p, n;

	printf("\nEnter a no.\n");
	scanf("%u", &x);
	printf("\nEnter a  starting pos & no. of bits to be reversed\n");
	scanf("%d%d", &p, &n);
	invrt = invert(x, p, n);
	printf("\nValue after inversion of given no. of bits   %u", invrt);
}

unsigned invert(unsigned x, int p, int n)
{
	return (x ^ (~(~0 << n) << ((p + 1) - n)));
} 
