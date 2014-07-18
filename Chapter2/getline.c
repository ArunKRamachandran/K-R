#include<stdio.h>

main()
{
	int i, len, c, lim = 30, l;
	char ar[lim];
	
	printf("\nEnter some words\n");
	for (i = 0; i < lim - 1 && ((c = getchar()) != '\n'); ++i)
		ar[i] = c;

	l = i + 1;
	printf("\nEntered string\n");
	for (i = 0; i <= l; ++i)
		printf("%c", ar[i]);
}
