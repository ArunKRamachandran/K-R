/* attempt to implement pointer to structure */

#include<stdio.h>
#include<string.h>

main()
{
	struct point {
		int x;
		int y;
	};
	struct point pt, *pp;
	pp = &pt;
	
	pt.x = 30;
	printf("using normal operation:%d\n", pt.x);
	(*pp).y = 50;
	printf("Using pointer operation:%d\n", (*pp).y);
	printf("Using pointer -> operator:%d\n", pp ->y);
}
