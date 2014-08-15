/* to get the no.of argumennts in the command line*/
#include<stdio.h>
#include<string.h>

main(int argc, char *argv[])
{
	int i;
	for (i = 1; i < argc; i++) {
		printf("%s%s", argv[i], (i < argc-1) ? " ": "");
		printf("%s\n",argv[i]);
	}
	printf("");
        printf("argc = %d\n", argc);
	return 0;
}

