#include<stdio.h>

int getlines1();
int getlines2();
int any(int s1l, int s2l);

char s1[30], s2[30];
int s = -1;

main()
{
	int s1l, s2l, pos;
	extern char s1[], s2[];
	extern int s;

	s = -1;
	printf("\nEnter first string         ");
	s1l = getlines1();
	printf("\nEnter the second string    ");
	s2l = getlines2();
	printf("\ns1  : %s", s1);
	printf("\ns2  : %s", s2); 
	pos = any(s1l, s2l);
	if (s == -1)
		printf("\nNo Common characters occurs");
	else if (s == 0)   
		printf("\nFirst common character occurs at pos.  %d", pos);
	
	printf("\n");
}

int getlines1()
{
	int i, l, c;
	extern char s1[];

	for (i = 0; i < 29 && ((c = getchar()) != '\n'); ++i)
		s1[i] = c;

	l = i + 1;
	return l;
}

int getlines2()
{
	int i, l, c;
	extern char s2[];
	
	for (i = 0; i < 29 && ((c = getchar()) != '\n'); ++i) 
		s2[i] = c;

	l = i + 1;
 	return l;
}

int any(int s1l, int s2l)
{
	extern char s1[], s2[];
	extern int s;
	int i, j, p = 0;

	i = j = 0;
	while (j < s2l) {
		while (i < s1l) {
			if (s1[i] == s2[j]) {
				p = i + 1;
				i = s1l;
				j = s2l;
				s = 0;
			}
			else 
			/*	s = -1;*/
				++i;
		}
		if (s == 0) 
			j = s2l;
		else {
			++j;
			i = 0;
			s = -1;
		}
	}
	if (s == 0)
		return p;
	else if  (s == -1)
		p = ' ';
		return p;
}	
