#include<stdio.h>

int lower(int c);
main()
{
	int c, l, i, x;
	int  ar[40];
	
	for (i = 0; i < 39; ++i)
		ar[i] = '\0';
	printf("\nEnter some characters : ");
	for (i = 0; i < 39 && ((c = getchar()) != '\n'); ++i) {
		x = lower(c);
		ar[i] = x;
		++i;
	} 
	l = i + 1;

 	printf("\nstring after converted into lower case, if any\n");
	for (i = 0; i < l; ++i)
		printf("%c", ar[i]);

	printf("\n");
}

int lower(int c)
{
	int x;
	
	x = (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
	return x;
} 
