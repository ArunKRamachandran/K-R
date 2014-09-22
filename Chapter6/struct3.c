#include<stdio.h>

main()
{
	int x;
	struct point {
		int x;
		int y;
	} pt;


	x = sizeof pt;
	//y = sizeof int;
	printf("x = %d\n", x);
}
