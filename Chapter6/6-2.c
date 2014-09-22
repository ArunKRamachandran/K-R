#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct tnode {
	char *word;
	int count;
	struct tnode *left;
	struct tnode *right;
};
