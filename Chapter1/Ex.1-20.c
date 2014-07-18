#include<stdio.h>

/* to replace the tabs in input text by blank spaces */
/* Exercise 1-20 */

main()
{
	int c, len = 0, i = 0, z, j = 0, k =0;
	char arr[100], newarr[200], x = ' ';

	printf("\nEnter some texts with tabs\n");
	for (i = 0; i < 100 && (c = getchar()) != EOF; ++i) {
		if (c == '\t')
			arr[i] = '\t';
		else
			arr[i] = c;
	}
	len = i + 1;

	z = 0;
	for (i = 0; i <= len; ++i) {
		if (arr[i] != '\t') {
			++z;
			newarr[k] = arr[i];
			++k;
		}
		if (arr[i] == '\t') {
			for (j = 1; j <= (8 - z); ++j) {
				newarr[k] = 'x';
			/*	++i;*/
				++k;
			}
			z = 0;
		}
	}
	--k;
	printf("\nText entered by you by replacing tabs with blank spaces\n");
	for (i = 0; i < k ; ++i)
		printf("%c", newarr[i]);
	return 0;
}
