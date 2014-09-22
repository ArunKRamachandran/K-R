#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define SIZE 100
#define MAXWORD 100

int line = 0;
int pos = 0;
struct tnode {
	char *word;
	int mul_occurance;
	int line_no[SIZE];
	int count;
	struct tnode *left;
	struct tnode *right;
};

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);
int getword(char *, int);

main()
{
	struct tnode *root;
	char word[MAXWORD];
	
	root = NULL;
	while (getword(word,MAXWORD) != EOF) {
		if (isalpha(word[0]))
			root = addtree(root,word);
	}
	treeprint(root);
	return 0;
}

int getword(char *word, int lim)
{
	int c, n;
	pos = 0;

	char *w = word;
	while (isspace(c = getchar()))
		;
	if (c != EOF)
		*w++ = c;
	if (!isalpha(c)) {
		*w = '\0';
		return c;
	}
	for (; --lim > 0; ++w) {
		c = getchar();
		if (c == '\n')
			line = line + 1;
		if (!isalnum(*w = c)) 
			break;
	}
	*w = '\0';
	return word[0];
}

struct tnode *talloc(void);
char *strdupx(char *);

struct tnode *addtree(struct tnode *p, char *w)
{
	int cond;
	
		
	if (p == NULL) {
		p = talloc();
		p->word = strdupx(w);
		p->count = 1;
		p->line_no[pos] = line;
		p->left = p->right = NULL;
	} else if ((cond = strcmp(w,p->word)) == 0) {
		p->count++;
		p->line_no[++pos] = line;
	}
	else if (cond < 0)
		p->left = addtree(p->left,w);
	else	
		p->right = addtree(p->right,w);
	return p;
}

void treeprint(struct tnode *p)
{
	int i;
	if (p != NULL) {
		treeprint(p->left);
/*		if ( (p->count) > 0) {
			printf("%s\n", p->word);
			for (i = 0; i < (p->count); i++)
				printf("%4d", p->line_no[i]);
		}
*/		if ( (p->count) > 0) {
			for (i = 0; i < (p->count); i++)
				printf("%4d", p->line_no[i]);
			printf("%s\n", p->word);
		}
		treeprint(p->right);
	}
}

struct tnode *talloc(void)
{
	return (struct tnode *)malloc(sizeof(struct tnode));
}

char *strdupx(char *s)
{
	char *p;

	p = (char *)malloc(strlen(s) + 1);
	if (p != NULL)
		strcpy(p, s);
	return p;
}
