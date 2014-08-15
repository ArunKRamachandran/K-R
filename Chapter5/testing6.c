#include<stdio.h>

main(int argc,char *argv[])
{
	char i, j, k , l , m;            /* taking each characters from 
					    given arguments */
	
	i = (*++argv)[0];
	printf("*++argv[0] = %c\n", i);
	j = (*++argv)[0];
	printf("*argv[1] = %c\n", j);

/*	while (argc-- > 0) {
		printf("argv[%d] = %s\n", i++, *argv++);
	}*/
}
