#include<stdio.h>

/* exercise 1-21 modified */
char newarr[100];
int k = 0;
void splessdif(int sp, int diff);
void spgreaterdif(int sp, int diff);
void spequaldif(int sp, int diff);

main()
{
	int c, len, z = 0, sp = 0, x, diff = 0, i;
	char arr[100];
	extern char newarr[];
	extern int k;

	for (i = 0; i <= 100; ++i) {
		arr[i] = newarr[i] = 0;
	}

	printf("\nEnter some texts with blank spaces\n");
	for (i = 0; i < 99 && (c = getchar() != EOF); ++i) {
		arr[i] = c;
	}
	len = i + 1;
	k = 0;
	for (i = 0; i <= len; ++i) {
		if (arr[i] != ' ') {  /* if it is a valid character */
			++z;
			newarr[k] = arr[i];
			++k;
		}
		if (arr[i] == ' ') {
			++sp;
			if (arr[i + 1] != ' ' || EOF) { 
				diff = 8 - z;
				if (sp < diff) {
					splessdif(sp, diff);
				}
				if (sp > diff) {
					spgreaterdif(sp, diff);
				}
				if (sp == diff) {
					spequaldif(sp, diff);
				}
			z = 0;
			sp = 0;
			}
		}
	}
	printf("\nText entered by you by replacing spaces with tabs and spaces\n");
	for (i = 0; i <= k; ++i) 
		printf("%c", newarr[i]);

	return 0;
}

void splessdif(int sp, int diff)
{
	int i = 0, m =0, y = 0, d = 0;
	extern char newarr[];
	extern int k;

	y = sp;
	d = diff;
	m = k;
	while (m <= (m + y - 1)) {
		newarr[m] = 'x';
		++m;	
		++k;
	}
}

void spgreaterdif(int sp, int diff)
{
	int i = 0, m = 0, y = 0, d = 0, j;
	extern char newarr[];
	extern int k;
	
	y = sp;
	d = diff;
	j = (y - d);
	m = k + 1;

        newarr[m] = '\t';
	++m;
	while (m  <= (m + y - 1)) {
		newarr[m] = 'x';
		++m;
		++k;
	}
}

void spequaldif(int sp, int diff)
{
	int m = 0, y = 0, d = 0;

	extern char newarr[];
	extern int k;

	y = sp;
	d = diff;
	m = k + 1;

	newarr[m] = '\t';
	++k;
}
