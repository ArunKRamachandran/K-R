#include<stdio.h>
#include<string.h>

main(int argc, char *argv[])
{
	int i = 0;
	char *sp;
/*
	printf("%d\n\n", argc);
	while (--argc > 0 ) {
		printf("%s\n", *++argv);
	}
	printf("\n");
*/
		sp = *argv++;
		printf("%s\n", sp);
		
		
	
}
