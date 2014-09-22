#include<stdio.h>
#include<string.h>

struct point {
	int x;
	int y;
};
struct rect {
	struct point pt1;
	struct point pt2;
};
struct point makepoint(int,int);

main()
{
	struct rect screen;
	screen.pt1 = makepoint(30,40);
	printf("Enabled Makepoint\n");
	printf("#.%d\n",screen.pt1.x);
	return 0;
}

struct point makepoint(int x, int y)
{
	struct point temp;

	temp.x = x;
	temp.y = y;
}
