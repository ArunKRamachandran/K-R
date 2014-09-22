#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define NKEYS 25
#define MAXWORD 100

//int getch(void);
//void ungetch(int);
//int getword(char *, int);
//int binsearch(char *, struct key *, int);

struct key {
	char *word;
	int count;
} keytab[] = {
	"auto", 0,
	"break", 0,
	"case", 0,
	"char", 0,
	"const", 0,
	"continue", 0,
	"default", 0,
	"unsigned", 0,
	"void", 0,
	"volatile", 0,
	"while", 0
	};

int getword(char *, int);
int binsearch(char *, struct key *tab, int);

/* count C word */
main()
{
	int n;
	char word[MAXWORD];

	while (getword(word, MAXWORD) != EOF) {
		printf("Reached back to main\n");
		if (isalpha(word[0])) {
			printf("word detected  -  %c\n", word[0]);
			if ((n = binsearch(word, keytab, NKEYS)) >= 0) {
				keytab[n].count++;
				printf("Found similar one\n");
			}
		}
	}
	for (n = 0; n < NKEYS; n++)
		if (keytab[n].count > 0)
			printf("%4d %s\n", keytab[n].count, keytab[n].word);
	return 0;
}
/* binsearch : find word in tab[0]......tab[n - 1] */
int binsearch(char *word, struct key tab[], int n)
{
	int cond;
	int low, high, mid;

	low = 0;
	high = n - 1;
	printf("In Binsearch\n");
	while (low <= high) {
		printf("In Binsearch WHILE Loop\n");
		mid = (low + high) / 2;
		printf("word - %s\n", word);
		//printf("Word in tab - %s\n",tab[mid].word);
		if ((cond = strcmp(word, tab[mid].word)) < 0)
			high = mid - 1;
		else if (cond > 0)
			low = mid + 1;
		else
			return mid;
	}
	printf("Binsearch Completed\n");
	return -1;
}
/* getword : get next word or character from input */
int getword(char *word, int lim)
{
	int c, getch(void);
	void ungetch(int);
	char *w = word;

	printf("In getword fn\n");
	while (isspace(c = getch()))
		;
	if (c != EOF)
		*w++ = c;
	if (!isalpha(c)) {
		*w = '\0';
		return c;
	}
	for ( ; --lim > 0; w++)
		if (!isalnum(*w = getch())) {
			ungetch(*w);
			break;
		}
	*w = '\0';
	puts(word);
	return word[0];
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch : too many characters\n");
	else
		buf[bufp++] = c;
}
