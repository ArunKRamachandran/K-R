#include<stdio.h>
#include<string.h>

#define MAXLINE 1000 /* maximum input line length */

int ggetline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; /* pattern to search for */

/* find all lines matching pattern */

main()
{
	char line[MAXLINE];
	int found = 0, i;

	while (ggetline(line,MAXLINE) > 0)
		if ((i = (strindex(line,pattern))) >= 0) {
		/*	printf("%s", line);*/
			printf("\n Specifed pattern found");
			printf("\nat %d", i);
		}
/*	return found;
	printf("%d", i);*/
}

/* getline : getline into s, return length */
int  ggetline(char s[], int lim)
{
	int c, i;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c!= '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;

	s[i] = '\0';
	return i;
}

/* strindex : return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
	int i, j, k;
/*	extern char pattern; */

	for ( i = 0; s[i] != '\0'; i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return (i + strlen(t));
	}
	return -1;
	
}
