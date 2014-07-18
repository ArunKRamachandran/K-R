#include<stdio.h>

/* to print all input lines that are longer than 5 characters */

main()
{
	int c, nc, j = 0, i, z, k;
	char inp[100];

	printf("\nEnter some text lines\n");
	while ((c = getchar()) != EOF) {
		++nc;
		if (j < nc) {
			inp[j] = c;
			++j;
		}
	}

/*	if (c == EOF) {
		++nc;
		inp[j] = '\n';
	} */

	printf("\nLines with more than 5 characters\n");
	
	for (i = 0; i <= nc; ++i) {
		if (inp[i] == '\n') {
			if (z > 5) {
				for (k = 0; k <= z; ++k) {
					printf("%c", inp[k]);
				}
				z = 0;
			}
			else 
				z = 0;
		}
		 ++z;
		}
}
				
		
