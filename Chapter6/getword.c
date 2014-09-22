#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*int getword(char *,int);
int main()
{
	int c;
	char word[10];

	printf("Enter a word\n");
	c = getword(word,100);
	printf("%s", word);
} */
int getword(char *word, int lim)
{
	int c;
	char *w = word;

	while (isspace(c = getchar()))
		;
	if (c != EOF)
		*w++ = c;
	if (!isalpha(c)) {
		*w = '\0';
		return c;
	}
	for (; --lim > 0; w++)
		if (!isalnum(*w = getchar())) {
			break;
		}
	*w = '\0';
	return word[0];
}

