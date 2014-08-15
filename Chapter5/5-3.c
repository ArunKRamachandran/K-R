#include<stdio.h>
#include<string.h>

void str_cat(char *, char *);

main()
{
	char s[15] = "i am, ";
	char t[7]  = "arun";
	char *x = s, *y = t;

	str_cat(x,y);
	printf("%s\n", s);
}

void str_cat(char *s, char *t)
{
	int i = 0;

	for (; *s != '\0'; s++)
		;
		

	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
	printf("\n");
}
