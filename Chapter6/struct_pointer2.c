#include<stdio.h>

main()
{
	char *w[10], x[] = "abcd";
	int i;

	for (i = 0; i < 5; i++)
		*w++ = *x;
	
}
