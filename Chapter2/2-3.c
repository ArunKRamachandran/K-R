#include<stdio.h>

void htoi(char s[], int len);

void main()
{
	int c, i = 0, len = 0;
	char ar[2];

	for ( i = 0; i < 2; ++i)
		ar[i] = 0; 

	printf("\nEnter a Hexadecimal No.\n");
	for (i = 0; i < 2 && ((c = getchar()) != '\n'); ++i) {
		if (c == 'A' || 'a') 
			ar[i] = 10; 
		else if (c == 'B' || 'b') 
			ar[i] = 11;
		else if (c == 'C' || 'c')
			ar[i] = 12;
		else if (c == 'D' || 'd')
			ar[i] = 13;
		else if (c == 'E' || 'e')
			ar[i] = 14;
		else if (c == 'F' || 'f')
			ar[i] = 15;
		else
			ar[i] = c;
	}
	len = i - 1 ;

	htoi(ar, len);
}

void htoi(char ar[], int len)
{
	int i = 0, x, prod = 1, sum = 0, y;
	x = len - 1;
	y = x;

	for (i = 0; i <= len; ++i) {
		if (x > 0) {
			while (y > 0) {
				prod = prod * 16;
				--y;
			}
			y = x - 1;
		}
		if (x == 0) 
			prod = 1;

 
		sum = sum + (ar[i] * prod);
		--x;
	}
	printf("\nInteger Equialent of given Hex\n");
	printf("%d\n", sum);
}
