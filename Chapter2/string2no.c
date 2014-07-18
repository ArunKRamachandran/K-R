#include<stdio.h>

main()
{
	int c, n, i;
	char ar[30];

	printf("\nEnter a strin\n");
	for (i = 0; i < 29 && (c = getchar()) != EOF; ++i) 
		ar[i] = c;

	n = 0;
	for (i = 0; (ar[i] >= '0' && ar[i] <= '9') && (i < 29); ++i)
		n = 10 * n + (ar[i] - '0');

	printf("\n%d", n);
}
