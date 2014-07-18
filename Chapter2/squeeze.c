#include<stdio.h>

/* to delete the character 'c' from the string */

main()
{
	int i, j, len = 0, c;
	char s[20];

	printf("\nEnter a string\n");
	for (i = 0; i < 19 && ((c = getchar()) != '\n'); ++i)
		s[i] = c;

	len = i + 1;
	for (i = j = 0; i <= len; ++i) {	
		if (s[i] != 'c')
			s[j++] = s[i];
		s[j] = '\0'; 
	}

	printf("\nNew string\n");
	for (i = 0; i <= len; ++i)
		printf("%c", s[i]);
}
