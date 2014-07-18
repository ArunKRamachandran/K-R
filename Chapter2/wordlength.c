#include<stdio.h>

main()
{
	int n;
	int l;

	printf("\nEnter a  no.");
	scanf("%d", &n);
	for (l = 31;l >= 0 && !((1 << l) & n); l--);
	l++;

	printf("\nlength   %d", l);
}
