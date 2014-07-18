#include<stdio.h>

main()
{
	int c, len, i = 0, j = 0, m, g, z = 0, k = 0, x = 0;
	char ar[300], xyz[400];

	printf("\nType a C code with comments\n");
	for (i = 0; i < 300 && (c = getchar()) != EOF; ++i) {
		ar[i] = c;
	}

	len = i + 1;
	for (i = 0; i <= len - 1; ++i) {
		if (ar[i] == '/') { /* if yes */
			if ((ar[i - 1] != 34) && (ar[i + 1] == '*')) { /* then it is a comment line */
				j = i + 1;
				while (ar[j] != '/') {
					++x;
					++j;
				}
				for (g = i + 1; g <= j; ++g)
					ar[g] = ' ';
				
				} 
			
			}
		 /*	else 
				xyz[k] = ar[i];
				++k; */
			
		if (ar[i] != '/') { 
			xyz[k] = ar[i];
			++k;
		} 
	}

	printf("\nCode entered by you by removing comment lines\n");
	z = k - 1 ;
	for (i = 0; i <= z; ++i) 
		printf("%c", xyz[i]);
}		 	

