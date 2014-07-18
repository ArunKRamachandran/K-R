#include<stdio.h>

/* reading some texts by using an looop equialent to for loop */

main()
{
	int c, lim = 30, i, k = 0;
	char ar[lim];

	printf("\nEnter some texts\n");
	
	i = 0; /* initialisation */
	while (i < lim - 1) {
		c = getchar();
			if (c == EOF)	
				i = lim - 1;
			else if(c == '\n')
				i = lim - 1;
			else {
				ar[i] = c;
				++i;
				++k;
			}
	}

	printf("\nText entered by you\n");
	for (i = 0; i < k; ++i) {
		printf("%c", ar[i]);
	}
	printf("\n");
}
