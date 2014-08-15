#include<stdio.h>

main(int argc, char *argv)
{
	char s[10];
	char *sp = s;
	int count = argc, i = 0;
	
	while (argc-- > 0) {
		*sp++ = *argv++;
		i++;
	}
	
	while (i > 0) {
		*sp--;
		i--;
	}
	while (count--) 
		printf("%s\n", sp--);
}
