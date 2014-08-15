#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAXLINE 100

int get_line(char *, int);
int atoi(char *);
void itoa(int n, char *);
void reverse(char *, int);
int str_index(char *, char *);
int getop(char *);

int main()
{
	char line[MAXLINE],s[10];
	char *li = line;
	int l, i, n, z;
	char x[25] = "Hello, World";
	char y[10] = "World";

	for (i = 0; i <= MAXLINE; ++i)
		*li++ = '\0';

	l = get_line(line,MAXLINE);
	n = atoi(line);
	
	printf("Calling getline fn....\n");
	printf("entered string : %s\n", line);
	printf("o/p after atoi fn processing : %d\n", n);
	itoa(n,s);
	printf("processing itoa fn.......\n");
	printf("result : %s\n", s);
	reverse(s,l);
	printf("...........................\n");
	printf("x = %s\ny = %s\n", x, y);
	z = str_index(x,y);
	if (z == -1)
		printf("y is not present in x\n");
	else
		printf("y is found in x at : %d\n", z);	
	return 0;
}

int get_line(char *s, int lim)
{
	int c, i, l;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		*s++ = c;
	if (c == '\n')
		*s++ = c;
	*s = '\0';

	return i + 1;
}

int atoi(char *s)
{
	int i, n;

	n = 0;
	for ( ; *s >= '0' && *s <= '9'; s++)
		n = 10 * n + (*s - '0');
	return n;
}

void itoa(int n, char *s)
{
	int i, sign;

	if ( (sign = n) < 0)
		n = -n;
	do {	
		*s++ = n % 10 + '0';
	} while ( (n /= 10) > 0);

	if (sign < 0 )
		*s++ = '-';
	*s = '\0';
/*	reverse(s);*/
}

void reverse(char *s, int l)
{
	int c;
	char *t;

	for (t = s +( l + 1); s < t; s++, t--) {
	c = *s;
	*s = *t;
	*t = c;
	}

	printf("reversed : %s\n", s);
}

int str_index(char *s, char *t)
{
	char *b = s;
	char *r, *p;

	for (; *s; s++) {
		for (r = s, p = t; *p != '\0' && *r == *p; r++, p++) 
			printf(".");
			if (*p == '\0')
				return s - b;
	}
	return -1;
}		 

int getop(char *s)
{
	int i, c;

	while ((*s = c = getchar()) == ' ' || c == '\t')
		;
	*s++ = '\0';
	if (!idigit(c) && c != '.')
		return c; /* not a number */
	*s--;
	if (isdigit(c)) /* collect integer part */
		while (isdigit(*++s = c = getch()))
			;
	if (c == '.') /*collect fractional part */
		while (isdigit(*++s = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return 0;
}
