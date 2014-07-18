#include<stdio.h>

/* TO remove the trailing blanks and tabs from each line of input */

main()
 {
 int c, nc, i = 0, j = 0, z = 0;
 char chr[100];

 printf("\nEnter some texts with trailing Blanks or Tabs\n");

 while ((c = getchar()) != EOF) {
	++nc;
	if (j < nc)
	 {
          chr[j] = c;
	  ++j;
 	 }
       }	
  for ( i =0; i <= nc; ++i)
    {  
     if ((c == EOF) && (chr[i-1] == ' ' || '\t'))
	   z = i; 
    }	

/* for (i = 0; i <= nc; ++i)
    {
    if ((chr[i] == ' ' || '\t') && (chr[i+1] == '\0'))
	z = i;

    }
*/
 printf("\nString entered by you without trailing blanks or tabs\n");

 for (i = 0; i <= z; ++i)
     printf("%c", chr[i]);

 }
