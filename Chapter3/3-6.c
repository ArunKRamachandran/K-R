#include<stdio.h>
#include<string.h>


void itoa(int n, char s[], int f);
void reverse(char s[]);

main()
{
	int n = 357, f;
	char s[10];

	printf("\nEnter the minimum field width :  ");
	scanf("%d", &f);
	printf("Integer: %d\n", n);
	itoa(n, s, f);
	printf("String : %s\n", s);
}
void itoa(int n, char s[], int f)
{
	int i, sign;
	long int num = n;

	if ((sign = num) < 0) 
		num = -num;

	i = 0;

	do {
		s[i++] = num % 10 + '0';
	} while ((num  /= 10) > 0);

	if (sign < 0)  
		s[i++] = '-';

	while ( i < f)
		s[i++] = ' ';

	s[i] = '\0';
/*	printf("%s", s);*/

	reverse(s);
}
void reverse(char s[])
{
    	int  i, j;
	char c;

    	for (i=0, j=strlen(s)-1; i<j; i++, j--)
    	{
        	c = s[i];
        	s[i] = s[j];
        	s[j] =c;
	}
	
/*	printf("%s", s);*/
}

