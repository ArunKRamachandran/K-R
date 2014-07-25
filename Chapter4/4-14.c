#include<stdio.h>

#define swap(t, x, y) { t z;\
			z = x;\
			x = y;\
			y = z;}
main()
{
	int x = 15, y = 9;

	printf("Before swap- x : %d y : %d", x,y);
	printf("\n");
	swap(int,x,y);
	printf("After swaping - x : %d y : %d", x,y);
	printf("\n");
}
