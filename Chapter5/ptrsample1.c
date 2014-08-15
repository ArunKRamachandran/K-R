/*to copy an array of integers using pointers */
#include<stdio.h>
#include<string.h>

char source[] ="123456789";
char destination[20];

void str_cpy(char *, char *, int);

int main()
{
	char *sp, *dp;
	int l;

	sp = source;
	dp = destination;
	l = strlen(source);
/*	printf("%d",l);
*/	str_cpy(sp,dp,l);

	puts(dp);	
}

void str_cpy(char *sp, char *dp, int l)
{
	while (l != 0) {
		*dp++ = *sp++;
		--l;
	}
}
		
