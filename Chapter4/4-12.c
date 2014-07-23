#include<stdio.h>

void rec_itoa(int n);

int i = 0;
char s[10];

main()
{
	int n;
	extern char s[];

	printf("Enter a number : \n");
	scanf("%d", &n);

	if (n > 0)
		rec_itoa(n);

	printf("result : %s", s);
}

void rec_itoa(int n)
{
	extern int i;
	extern char s[];

	if (n/10)
		rec_itoa(n/10);
	s[i++] = ( n % 10 + '0');
	
}
