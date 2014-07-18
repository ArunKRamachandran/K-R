#include<stdio.h>
#include<stdio.h>

main()
{
	int i, k;
	char s[10];

/*	printf("%s", s);
	printf("\n");*/
	for (i = 10, k= 0; i < 15; ++i, ++k) {
		s[i] = 'A' + k;
		putchar(s[i]);
	}
/*	printf("%s", s);*/
}
