#include<stdio.h>

/* string concatination fn */

void strcat(char s[], char t[]);

void main()
{
	char s[] = "arun";
	char t[] = "aswin";

	strcat(s, t);
}

void strcat(char s[], char t[])
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0') /* find end of s */
		++i;
	while ((s[i++] = t [j++]) != '\0'); /* copy t */
		;

	printf("\n%s", s);
}
