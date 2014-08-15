#include<stdio.h>
#include<string.h>

void str_cpy(char *, char *, int );
void str_cat(char *, char *, int );
int str_cmp(char *, char *, int);

main()
{
	int n = 5, i, c;
	char s[35] = "Hello,world";
	char t[7]  = "India!";

	printf("s = %s\n", s);
	printf("t = %s\n", t);
	printf("No.of characters used for processing : %d\n", n);
	printf("Enter the following keys for the processing\n");
	printf("strcpy - 1\nstrcat - 2\nstrcmp - 3\n");
	scanf("%d", &c);

	switch(c) {
		case 1: {
			str_cpy(s,t,n);
			printf("%s\n", s); 
			break;
		}
		case 2: {
			str_cat(s,t,n);
			printf("%s\n", s);
			break;
		}
		case 3: {
			i = str_cmp(s,t,n);
			printf("strcmp: return <0 if s<t, 0 if s==t, >0 if s>t\no/p: %d\n", i);
			break;
		}
		default : {
			printf("Enter any of the following keys\n");
			break;
		}
	}

}
void str_cpy(char *s, char *t, int n)
{

	while (((*s++ = *t++) != '\0') &&( n > 1)) {
		n--;
	}
	while (n-- > 1)
		*s++ = '\0';
	while (*s) {
		*s++ = '\0';
	}
	
}

void str_cat(char *s, char *t, int n)
{
	while (*s) {
		s++;
	}	

	while ( (*s++ = *t++) && (n > 0)) {
		--n;
	}
	while (n-- > 0)
		*s++ = '0';
}
 /* strcmp fn : return <0 if s < t, 0 if s == t, >0 if s > t */
int str_cmp(char *s, char *t, int n)
{
	for ( ;( *s == *t) && (n > 1); s++, t++, n--)
		if (*s == '\0')
			return 0;
	return *s - *t;
}
