#include<stdio.h>

main(int argc,char *argv[])
{
	int i;
	char *s[10];
	char *sp = *s;

	sp = *++argv;
	*s = sp;
	printf("%s", s[0]);
}
