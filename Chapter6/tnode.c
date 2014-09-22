#include<string.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct tnode {
	char *word;
	int count;
	struct tnode *left;
	struct tnode *right;
};

#define MAXWORD 100

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);
int getword(char *, int);

main()
{
	struct tnode *root;
	char word[MAXWORD];

	root = NULL;
	while (getword(word,MAXWORD) != EOF)
		if (isalpha(word[0]))
			root = addtree(root, word);
	treeprint(root);
	return 0;
}

int getword(char *word, int lim)
{
	int c, n;
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
struct tnode *talloc(void);
char *strdupx(char *);

/* addtree : add a node with w, at or below p */

struct tnode *addtree(struct tnode *p, char *w)
{
	int cond;

	if (p == NULL) {
		p = talloc();
		p->word = strdupx(w);
		p->count = 1;
		p->left = p->right = NULL;
	} else if ((cond = strcmp(w,p->word)) == 0)
		p->count++; /* repeated word */
	else if (cond < 0)  /* less than into left subtree */
		p->left = addtree(p->left,w);
	else 
		p->right = addtree(p->right,w);
	return p;
}

/* tree print */
void treeprint(struct tnode *p)
{
	if (p != NULL) {
		treeprint(p->left);
		printf("%4d %s\n", p->count, p->word);
		treeprint(p->right);
	}
}


/* talloc : make a tnode */
struct tnode *talloc(void)
{
	return (struct tnode *) malloc(sizeof(struct tnode));
}
char *strdupx(char *s)
{
	char *p;

	p = (char *) malloc(strlen(s) + 1);
	if (p != NULL)
		strcpy(p, s);
	return p;
}
