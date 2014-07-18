#include<stdio.h>

#define IN 1
#define OUT 0

/* To print one word per line */

main()
 {
    int c, nl, nw, state;

    state = OUT;
    nl = nw = 0;
    while ((c = getchar()) != EOF) {
         if (c == '\n')
	    printf("\n");
           else if (c == '\t')
                   printf("\n");
		else if (c == ' ')
                        printf("\n");
			else
 			  {
                            putchar(c);
         	          }
       
     }
 }    
  
