#include<stdio.h>
#include<string.h>

main(int argc, char *argv[])
{
	int i = 0;
	printf("%d\n", argc);
	while (--argc > 0 ) {
		printf("%s\n", *++argv);
	}
}
