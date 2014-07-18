#include<stdio.h>
#include<string.h>
#include<math.h>

void itoa(int n, char s[]);
void reverse(char s[]);

main()
{
	int n = -2147483648;
	char s[10];

	printf("Integer: %d\n", n);
	itoa(n, s);
	printf("String : %s\n", s);
}
void itoa(int n, char s[])
{
	int i, sign;
	int num = n;

	
	sign = num;

	i = 0;

	do {
		s[i++] = abs(num % 10) + '0';
	} while ((num  /= 10) != 0);

	if (sign < 0)  
		s[i++] = '-';

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

