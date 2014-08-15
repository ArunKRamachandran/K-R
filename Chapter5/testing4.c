#include<stdio.h>

main(int argc, char *argv[])
{
	char s[10], x;
	int i = 0;
	
	while (--argc > 0)
		printf("%s\n", argv[i++]);
}
