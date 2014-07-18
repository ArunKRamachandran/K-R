#include<stdio.h>

int bitcount (unsigned x);

main()
{
	unsigned x;
	int nb;

	printf("\nEnter a no. : ");
	scanf("%u", &x);

	nb = bitcount(x);

	printf("\nNo.of  1's : %d\n", nb);
}

int bitcount (unsigned x)
{
	int b;

	for (b = 0; x != 0; x >>= 1)
		if (x & 01)
			b++;
	return b;
}
