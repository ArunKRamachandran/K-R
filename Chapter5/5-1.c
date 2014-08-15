#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define SIZE 10
#define BUFFSIZE 100

int getch(void);
void ungetch(int);
int get_line(int *);

char buf[BUFFSIZE];
int bufp = 0;

int main()
{
	int n, array[SIZE], i, c;
	
	for (n = 0; n < SIZE; n++) {
		array[n] = 0;	
	}

	for (n = 0; n < SIZE && get_line(&array[n]) == EOF; ++n)
		;
	i = 0;
	while (i < n)
		printf("%d", array[i]);
/*	for (n = 0; n < SIZE ; n++)
		printf("%d", array[n]);
*/	return 0;
}

int get_line(int *pn)
{
	int c, sign, d;
	
	while (isspace(c = getch()))
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); /* its not a number */
		return 0;
	}
	sign = (c == '-') ? -1: 1;
	
	if (c == '+' || '-') {
		if (!isdigit(c = getch())) {
			ungetch(c);
			ungetch((sign == 1) ? '+' : '-');
			return 0;
		}
	}
	
	for (*pn = 0; isdigit(c);  c = getch()) {
		*pn = 10 * *pn + (c - '0');
	} 
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
	
}

int getch(void)
{
	return (bufp > 0 ) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFFSIZE)
		printf("ungetch:too many charcters\n");
	else
		buf[bufp++] = c;
}

