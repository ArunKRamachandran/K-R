#include<stdio.h>
#include<string.h>

void str_cat(char *, char *);

main()
{
	char s[15] = "Hello, ";
	char t[7]  = "world!";
	
	printf("s = %s\n", s);
	printf("t = %s\n", t);

	str_cat(s,t);

	printf("s = %s\n", s);
	printf("t = %s\n", t);
}

void str_cat(char *s, char *t)
{
	

	while (*s++ != '\0') 
		; /* this will give an error in op. becz
		     when *s points to '\0' at the moment itslf 
		     that s will be incremented.... 
		     so an s-- at the end of the loop will give desired
		     op. */
		  /* or this loop can be re-write like this ->
		     while (*s) {
			s++;
		     }
			*/
		
	s--;
	while (*s++ = *t++)
		;

}
