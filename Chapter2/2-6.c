#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

main()
{
	unsigned x, y, rslt; 
	int p, n, i;

	printf("\nEnter 1st  number :  ");
	scanf("%u", &x);
	printf("\nEnter 2nd number to take no of bits  :  ");
	scanf("%u", &y);
	printf("\nEnter the POSITION and NUMBER of bits to replace  :  ");
	scanf("%d%d", &p, &n);

	rslt = setbits(x, p, n, y);

	printf("\nResult after replacing bits  :  %d", rslt);
	printf("\n");
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	unsigned y1, y2,  x1, z, rslt, xcopy, ycopy;

	xcopy = x;
	ycopy = y;

	y1 = y & (~(~0 << n));
	y2 = y1 << (p + 1 - n);

	z =(~ ( ( ~ ( ~0 << n) ) <<  (p + 1 - n)) );
	x1 = ( x & z );

	return (x1 | y2);
	
}

