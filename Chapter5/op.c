
#include <stdio.h>

void strct(char *s, char *t);

int main()
{
	char s[15] = "Hello, ";
	char t[7] = "world!";
	printf("s = %s\n", s);
	printf("t = %s\n", t);
	strct(s, t);
	printf("s = %s\n", s);
	printf("t = %s\n", t);
}

/* strct: concatenate t to the end of s; s must be big enough */
void strct(char *s, char *t)
{
	for ( ; *s; s++)
		;
	for ( ; *s = *t; s++, t++)
		;
}
