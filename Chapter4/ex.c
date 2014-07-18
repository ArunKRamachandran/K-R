#include<stdio.h>
#include<ctype.h>
#include<string.h>

main()
{
	char num[10], c, s[10];
	int i, j;

	for(i = 0; i < 10; ++i) {
		num[i] = getch();
		s[i] = ungetch();
	}
}
