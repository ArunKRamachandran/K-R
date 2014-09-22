#include<stdio.h>
#include<string.h>

#define MAXLINES 5000
#define MAXLEN 1000

char *lineptr[MAXLINES];

int readline(char *lineptr[], int nlines);
void writeline(char *lineptr[], int nlines);
void qqsort(void *lineptr[], int left, int reight, int (*comp)(void *, void *));
int numcmp(char *, char *);
int get_line(char s[], int lim);
/* sort input lines */
main(int argc, char *argv[])
{
	int nlines;
	int numeric = 0;

/*	if (argc > 1 && strcmp(argv[1], "-n") == 0)
		numeric = 1;
*/	 printf("Reading Lines.... Control to readlines...\n");

	if ((nlines = readline(lineptr, MAXLINES)) >= 0) {
		printf("completed readline-calling QSORT\n");
		qqsort((void**) lineptr, 0, nlines - 1, (int (*)(void *, void *))strcmp);
		printf("COmpleted QSORT : Moving to writelines\n");
		writeline(lineptr, nlines);
		return 0;
	}
	else {
		printf("Input too big to sort\n");
		return 1;
	}
}

void qqsort(void *lineptr[], int left, int right,
		int (*comp)(void *, void *))
{
	printf("Inside QSORT\n");
	int i, last;

	void swap(void *lineptr[], int, int);

	if (left >= right)
		return;
	swap (lineptr, left, (left + right) / 2);
	//printf("Qsort :%s\n", lineptr[0]);
	last = left;
	for (i = left + 1;i <= right; i++)
		if ((*comp)(lineptr[i], lineptr[left]) < 0)
			swap(lineptr, ++last, i);
	swap(lineptr, left, last);
	qsort(lineptr, left, last - 1, comp);
	qsort(lineptr, last + 1, right, comp);
	printf("COmpleted sorting..\n");
}

#include<stdlib.h>

int numcmp(char *s1, char *s2)
{
	double v1, v2;

	v1 = atof(s1);
	v2 = atof(s2);
	if (v1 < v2)
		return -1;
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

	for (i = 0;i < lim && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
		printf("taking characters %c..\n", s[i]);
	}
	if (c == '\n') {
		s[i++] = c;
		printf("Detected a new line..\n");
	}
	s[i] = '\0';
	puts(s);
	return i;
}

int readline(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while ((len = get_line(line, MAXLEN)) > 0) {
		printf("At Readline..\n");
		puts(line);
		printf("\n");
/* 		if (nlines >= maxlines)
			return -1;
		else {
*/			line[len - 1] = '\0';
			strcpy(p, line);
			//p = line;
			//printf("%s\n", p);
			lineptr[nlines] = p;
			printf("stored valu :%s\n", lineptr[nlines]);
			printf("Again going back to Getline..\n");
			nlines++;
		//}
	}
	printf("Nlines : %d\n", nlines);	
	return nlines;
}

void writeline(char *lineptr[], int nlines)
{
	printf("IN Writeline\n");
	int i;
	
	for (i = 0; i < nlines; i++) {
		printf("Printing line..\n");
		printf("%s\n", *lineptr++);
	}
}
