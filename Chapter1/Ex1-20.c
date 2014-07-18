#include<stdio.h>

/*#define MAXLINE 100
#define MAXLINE2 200*/

void detab(char ar[], char newar[],  int l);
int getline(char ar[]);

/* Function detab - to remove tabs from input with proper no.of blank spaces */
main()
{
	int len;
	char x = ' ', ar[100], newarr[200];

	printf("\nEnter a string with tabs\n");

	len = getline(ar);
	
	printf("\nString entered by you by replacing tabs with blank spaces\n");
	detab(newarr, ar, len);
}

/* getline: read aline into array arr, return length */
int getline(char ar[])
{
	int c, i;

	for (i = 0; i < 100 && (c = getchar()) != EOF && c != '\t'; ++i) {
		ar[i] = c;
		if (c == '\t') {
			ar[i] = c;
			++i;
		}
	}
	ar[i] = '\0';
	return i;
}

/* detab: to replace tabs with corresponding no. of blank spaces */
void detab(char to[], char from[], int len)
{ 
	int i, j;
	char x = ' ';
/*	extern int n;*/

	for ( i = 0; i <= len; ++i) {
		if (from[i] != '\t') {
			to[i] = from[i];
		}
		else {
			for (j = 0; j <= 7; ++j) {
				to[i] = x;
			}
		}
	}
}
