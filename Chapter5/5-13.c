#include<stdio.h>
#include<string.h>

main(int argc, char *argv[])
{
	int i, n, len, diff = 0;
	char *c;
	char s[100], new_s[100], x;

	if (argc <= 1) {
		printf(" expected format is 'tail - n'\n");
		printf(" Processing with default settings ( n = 10)\n");
		n = 10;
	}

	if (argc > 1) {
		*argv++;
		*argv++;
		c = *argv;
		n = atoi(c);
		printf("n = %d\n", n);
	}

	printf("Enter some characters :\n");
	gets(s);
	len = strlen(s);
	
	if (len == n) {
		puts(s);
	}

	if (n > len) {
		printf("Error : cann't be processed\n");
	}
	if (n < len) {
		printf("Last %d characters of given string :\n", n);
		diff = len - n;
		for (i = len; i >= diff; i--) 
			printf("%c", s[i]);
	}

}
