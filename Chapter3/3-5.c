#include<stdio.h>
#include<string.h>

void itoa(int n, char s[], int b);
void reverse(char s[]);

main()
{
	int n = 2598, b;
	char s[10];

	printf("\nEnter the base to be converted : ");
	scanf("%d", &b);

	printf("Integer: %d\n", n);
	itoa(n, s, b);
	printf("Base   : %d\n", b);
	printf("String : %s\n", s);
}

void itoa(int n, char s[], int b)
{
	int i, sign, rem, k;
	long int num = n;

	if ((sign = num) < 0)
		num = -num; 

	i = 0;
	int j, z = 0;

	switch (b) {
		
		case 8:
			do {
				s[i++] = num % 8 + '0';
			/*	printf("%d", s[i]);*/
			} while ((num /= 8) > 0);
			
			break;

		case 2:
			do {
				s[i++] = num % 2 + '0';
			} while ((num /= 2) > 0);

			break;
		case 16:
			do {
				s[i] = num % 16 + '0';
				
				for (j = 10, k = 0; j <= 15; ++j, ++k) {
					
					if (s[i]  == j)
						s[i] = 'A' + k;
				
				}
				++i;
			} while ((num /= 16) > 0);
						
		default:
			break;
	}
	
	if (sign < 0)
		s[i++] = '-';
	
	s[i] = '\0';

	reverse(s);
}

void reverse(char s[])
{
	int i, j;
	char c;

	for (i = 0, j = strlen(s) - 1; i < j; ++i, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		
	}
	puts(s);
}
		
