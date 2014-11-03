#include<stdio.h>
#include<ctype.h>
#include<string.h>

main(int argc, char *argv[]) {

	int c;

	printf("Argv[0] :   ");
	printf("%s\n", argv[0]);

	printf("Agrv[1] :   ");
	printf("%s\n", argv[1]);

	if (strcmp(argv[1],"lower") == 0)
		while ((c = getchar()) != EOF)
			putchar(tolower(c));
	if (strcmp(argv[1],"upper") == 0)
		while ((c = getchar()) != EOF)
			putchar(toupper(c));

	return 0;
}
