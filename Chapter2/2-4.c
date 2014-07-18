#include<stdio.h>

/* modified Squeeze fn */
char s1[20], s2[20];
int getlines1();
int getlines2();
void squeeze(int s1, int s2); 

main()
{
	int c, i = 0, s1l, s2l;
	extern char s1[], s2[];

	printf("Enter the first string\n");
	s1l = getlines1();
	printf("\nEnter the second string\n");
	s2l = getlines2();
	printf("\nS1  :%s", s1);
	printf("\nS2  :%s", s2);

	squeeze(s1l, s2l);
}

int getlines1()
{
	int c, i = 0,l;
	extern char s1[];

	for (i = 0; i < 19 && ((c = getchar()) != '\n'); ++i) 
		s1[i] = c;		

	l = i + 1;
	return l;
}

int getlines2()
{
	int c, i = 0, l;
	extern  char s2[];

	for (i = 0; i < 19 && ((c = getchar()) != '\n'); ++i)
		s2[i] = c;

	l = i + 1;
	return l;
}

void squeeze(int s1l, int s2l)
{
	int i, j, s;
	extern char s1[],s2[];	

	i = 0;
	j = 0;

	while (j < s2l) {
		while (i < s1l) {
			if (s1[i] == s2[j]) {
				s1[i] = '\0';
				++i;
			}
			else 
				++i;
		}
		++j;
		i = 0;
	} 
	printf("\nModified s1 : ");
	for (i = 0; i <= s1l; ++i)
	printf("%c", s1[i]);
 	
	printf("\n");
}
