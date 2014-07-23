#include<stdio.h>
#include<string.h>

void reverse(char s[], int l);

char x[20];
int i = 0;

main()
{
	int l, i, j;
	char s[20];
	extern char x[];

	for (j = 0; j <= 20; ++j)
		s[j] = x[j] =  '\0';

	printf("Enter a string : ");
	gets(s);
	l = strlen(s);

	reverse(s,l);
	
	puts(x);
}
void reverse(char s[], int l)
{
	int j;
	extern char x[];
	extern int i;

	if (l  > 0) {
		x[i++] = s[--l];
		reverse(s,l);
	}
	return;
}

		
	
