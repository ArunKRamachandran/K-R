#include<stdio.h>
#include<math.h>

main()
{
	int j = 1 , x = pow(10, 6), i;

	for ( i = 0; i < 6; ++i) {
		j = 10 * j;
	}
	printf("\nResult manually : %d", j);
	printf("\nResul automatically : %d", x);
}
