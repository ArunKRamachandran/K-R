#include<stdio.h>
#include<string.h>

int strend(char *, char *);

int main()
{
	char s[20] = "hello, world";
	char t[20] = "world";
	int r;
	printf("s = %s\n", s);
	printf("t = %s\n", t);

	r = strend(s,t);

	printf("op -> 1 if string t present at the end of the s, 0 otherwise\n");	
	printf("Returned value : %d\n", r);
	return 0;
}

int strend(char *s, char *t)
{
	int ls = strlen(s), lt = strlen(t), diff;

	diff = ls - lt;

	while (diff > 0) {
		*s++;
		--diff;
	}
	
	while (*s++ == *t++) {
		return 1;
	} 	

	return 0;
}
