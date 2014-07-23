#include<stdio.h>
#include<string.h>

char arrayfun(char s[], int l);

main()
{
	int i, j, l;
	char s[10], x[10];

	s[] = "arun";
	l = strlen(s);
	x[] = arrayfun(s,l);

	puts(x);
}
char arrayfun(char s[], int l)
{
	int i;
	char x[10];

	for (i = 0; i < l; ++i,--l)
		x[i] = s[l];

	return x;
}
