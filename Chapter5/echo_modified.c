#include<stdio.h>
#include<string.h>
#define MAXLINE 100

int get_line(char *line, int max);

/*find : print lines that match pattern from first arg */
main(int argc, char *argv[])
{
	char line [MAXLINE];
	int found = 0;

	if (argc != 2) {
		printf("Usage : find pattern\n");
	}
	else
		while ((get_line(line, MAXLINE)) > 0)
			if (strstr(line,argv[1]) != NULL) {
				printf("%s", line);
				found++;
			}
		return found;
}
int get_line(char *s, int lim)
{
	int c, i;
	
	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF)
		*s++ = c;
	*s = '\0';
	return i;
}
