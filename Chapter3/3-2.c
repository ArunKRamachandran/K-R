#includ<stdio.h>

int l;
void escape(char s[], char t[]);

main()
{
	int i = 0;
	char s[40], t[40], c;
	extern int l;

	l = 0;
	for (i = 0; i <= 40 ; ++i)
		s[i] = t[i] = '\0';

	printf("\nEnter a string with newlines, tabs etc \n");
	for ( i = 0; i < 40 && ((c = getchar()) != EOF); ++i) {	
		t[i] = c;
		++l;
	}

	escape(s,t);

/*	printf("\nString entered by you after making some changes\n");
	printf("%s", s); */
}

void escape(char s[], char t[])
{
	extern int l;
	int i, j = 0;
	char c;

	for (i = 0; i <= l; ++i) {
		switch(t[i]) {
			case '\n':
			        s[j] = '\\';
				++j;
				s[j] = 'n';
				++j;
				break;
			case '\t': 
				s[j] = '\\';
				++j;
				s[j] = 't';
				++j;
				break;
			default : 
				s[j] = t[i];
				++j;
				break;
		}
	}
	
	printf("\nString entered by you after making some changes\n");
	printf("%s", s);
}
			
