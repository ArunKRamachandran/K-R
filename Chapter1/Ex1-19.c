#include<stdio.h>

/* to print the reverse of the character string */
/* using a function */

void reverse(char chr[], int nc);

main()
 {
 int c, nc = 0, i, j = 0;
 char chr[30];

 printf("\nENter a  string\n");

 while ((c = getchar()) != EOF) {
	++nc;
	if (j < nc)
	  {
	  chr[j] = c;
	  ++j;
	  }
	}

 printf("\nString in reverse order\n");
 reverse(chr, nc);
 }

void reverse(char chr[], int nc)
 {
 int i;
 
 for (i = nc; i >= 0; --i)
     {
     printf("%c", chr[i]);
     }
 printf("\n");
 }
