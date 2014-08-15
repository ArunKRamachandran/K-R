#include<stdio.h>

int str_cmp(char *, char *);

main()
{
	char s[] = "bn integer";
	char t[] = "an integer";
	int i ;
	char *x = s, *y = t;

	i = str_cmp(x,y);

	printf("%d", i);
}

/* strcmp : return < 0 if s<t, return = 0 if s=t, return > 0 if s>t */
int str_cmp(char *s, char *t)
{
	for ( ; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}	
