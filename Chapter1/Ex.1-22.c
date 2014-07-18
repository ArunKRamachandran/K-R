#include<stdio.h>

#define TAB 6

/* to fold input lines */ 

main()
{
	int c, nc, len, i = 0, j = 0;
	char arr[100], newarr[200];

	printf("\nEnter a text line\n");
	for (i = 0; i < 99 && ((c = getchar()) != EOF); ++i) {
		arr[i] = c;
	}

	len = (i + 1);
	for (i = TAB; i <= len; i = i + TAB) {
		if (arr[i] == ' ' || '\n' || '\t')
