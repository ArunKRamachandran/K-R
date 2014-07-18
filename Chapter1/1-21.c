#include<stdio.h>

main()
{
	int c, k, i = 0, ch = 0, sp = 0, diff = 0, x = 0, sp_det = 0, len, j;
	char ar[100], xyz[100];

	printf("\nEnter some texts with texts\n");
	for (i = 0; i <= 99 && (c = getchar()) != EOF; ++i) 
		ar[i] = c;

	len = i + 1;
	i = 0; /* to start from the begining of the array */
	k = 0;/* initialising new array position */ 
	for ( i = 0; i <= len; ++i) { /* to access array */
	while (i  <= len) {
		if ( ar[i] == ' ') {
			++sp;
			++i;
		}
		if (ar[i] != ' ') {
			++ch;
			xyz[k] = ar[i];
			++i;
			++k;
		}
		if (ar[0] == ' ') /* to find the begining position of spaces*/
			sp_det = 0;
	
		
		sp_det = ch + 1;

		diff = (8 - ch);

		if ( sp < diff) {
			for (j = sp_det; j <= (sp_det + sp); ++j) {
				xyz[j] = ' ';
				++k;
			}
		}
		if (sp == diff) {
			xyz[sp_det] = '\t';
			++k;
		}
		if (sp > diff) {
			x = sp - diff;
			xyz[sp_det] = '\t';
			for (j = sp_det + 1; j <= (sp_det + 1 + sp); ++j) {
				xyz[j] = ' '; 
				++k;
			}
		}

		
		
	ch = 0;
	sp = 0;
	sp_det = 0;
	diff = 0;
	}

	printf("\nTexts entered by you by replacing spaces with Tabs and spaces\n");
	for (i = 0; i <= k; ++i)
		printf("%c", xyz[i]);
}
