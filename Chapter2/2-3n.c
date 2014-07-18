#include<stdio.h>

int htoi(char hex[], int l);
main()
{
	int c, l = 0, n, i, j, hx;
	char hex[30];

	printf("\nEnter a hex no. ");
	for (i = 0; i < 29 && ((c = getchar()) != '\n'); ++i) {
		hex[i] = c;
		++l;
	}

	hx = htoi(hex, l);
	printf("\nEquialent integer : %d\n", hx);
}
int htoi(char hex[], int l)
{
	for (i = 0; i <= l; ++i) {
		if (hex[i] >= 'a' && hex[i] <= 'z')
			hex[i] = c
