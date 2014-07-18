#include<stdio.h>

void expand(char s1[], char s2[]);

int l;

main()
{
	char s1[100], s2[100];
	int c, i = 0, j = 0, z;
	extern int l;

	l = 0;
	for (i = 0; i <= 100; ++i) 
		s1[i] = s2[i] = '\0';

 	printf("\nEnter a string with notations like a-z, 0-9 etc ");
	for (i = 0; i < 100 && ((c = getchar()) != EOF); ++i) {
		s1[i] = c;
		++l;
	}

	expand(s1,s2);
}
void expand(char s1[], char s2[])
{
	extern int l;
	int i = 0, j = 0, len = 0;
	char pr, nxt, k, m, prpr;

	printf("\n");
	for (i = 0, j = 0; i <= l; ++i) {
		switch(s1[i]) {
			case '-':
				pr = s1[i - 1], nxt = s1[i + 1], prpr = s1[i-2];
		if ( ((pr >= 'a' && pr <= 'z') || (pr >= 'A' && pr <= 'Z')) && ((nxt >= 'a' && nxt <= 'z') || (nxt >= 'A' && nxt<= 'Z')) ) {
			s2[j] = pr;
			for (k = pr; k <= nxt; ++k)
				s2[++j] = ++pr;
				len = i;
		}
	/*	if ( ((pr >= 'a' && pr >= 'z') || (pr >= 'A' && pr <= 'Z')) &&( prpr == '-')) {
	                	
			s2[++j] = '\0';
		}	*/
		
		if  ((pr >= '0' && nxt <= '9')) {
			s2[j] = pr;
			for (m = pr; m <= nxt; ++m)
				s2[++j] = ++pr;
		}
			break;
			default:
				s2[j] = s1[i];
				break;
		}
	}
	
	printf("%s", s2);
	printf("\n");
}
					
					
					

