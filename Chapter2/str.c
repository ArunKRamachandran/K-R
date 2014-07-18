#include<stdio.h>

main()
{
	int c;

	c = getchar();

	if (c >= 'A' && c <= 'Z')
		c = c + 'a' - 'A';

	printf("\n%d", c);
}
