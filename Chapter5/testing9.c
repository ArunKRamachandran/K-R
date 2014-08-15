#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

main(int argc, char *argv[])
{
	int i, j, m = 2;
	char arr[20], c;
	char *p;

	*argv++;

	p = *argv;
	
	i = atoi(p);

	printf("%d\n", i);
}
