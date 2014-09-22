#include<stdio.h>
#include<string.h>

struct point {
	int x;
	int y;
}

main()
{
	struct point pt;

	pt.x = 20;
	pt.y = 30;

	printf("x = %d\n", pt.x);
	printf("y = %d\n", pt.y);
}
