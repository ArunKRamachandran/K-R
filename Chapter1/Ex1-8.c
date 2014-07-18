#include<stdio.h>

/* To count the no.of blanks, tabs, and newlines */

main()
 {

   int c, nb, nt, nl;

   nb = 0;
   nt = 0;
   nl = 0;

   printf("Enter some words..\n");
  
   while ((c = getchar()) != EOF )
         {
          if (c == '\n')
              ++nl;
          if (c == '\t')
              ++nt;
          if (c == ' ')
              ++nb;
         }

   printf("\nNo.of newlines = %d , No.of tabs = %d , No.of Blank   spaces = %d\n",nl,nt,nb);
 }        
   
