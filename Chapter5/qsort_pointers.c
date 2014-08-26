#include<stdio.h>
#include<string.h>

#define MAXLINE 500


char *lineptr[MAXLINE];


int read_line(char *lineptr[], int nlines);
void write_line(void *lineptr[], int nlines);
int get_line(char s[], int lim);
void q_sort(void *lineptr[], int left, int right,
		int (*comp)(void *, void *));
int numcmp(char *, char *);


/* sort input lines */
main(int argc, char *argv[])
{
	int nlines;
	int numeric = 0;

	if (argc > 1 && strcmp(argv[1], "-n") == 0)
	numeric = 1;
	if ((nlines = read_line(lineptr, MAXLINE)) >= 0) {
		q_sort ( (void **) lineptr, 0, nlines - 1,
			(int (*)(void *, void *))(numeric ? numcmp : strcmp));
		write_line(lineptr, nlines);
		return 0;
	}
	else {
		printf("input too big to dort\n");
		return 1;
	}
}
void q_sort(void *v[], int left, int right, int (*comp)(void *, void *))
{
	int i, last;
	
	void swap(void *v[], int, int);

	if (left >= right)
		return;
	swap (v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if ((*comp)(v[i], v[left]) < 0)
			swap (v, ++last, i);
	swap(v, left, last);
	q_sort(v, left, last - 1, comp);
	q_sort(v, last + 1, right, comp);
}

#include<stdlib.h>

int numcmp(char *s1, char *s2)
{
	double v1, v2;

	v1 = atof(s1);
	v2 = atof(s2);
	if (v1 < v2)
		return -1;
	else if (v1 > v2)
		return 1;
	else
		return 0;
}

void swap(void *v[], int i, int j)
{
	void *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
int get_line(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}
int read_line(int *lineptr[], int MAXLINE)
{
	int len, nlines;
	char *p, line[MAXLEN];
	
	nlines = 0;
	while ((len = get_line(line, MAXLEN)) > 0)
		if (nlines >= MAXLINES)
			return -1;
		else {
			line[len - 1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}
void write_line(char *lineptr[], int nlines)
{
	int i;
	
	for (i = 0; i < nlines; i++)
		printf("%s\n", lineptr[i]);
}
