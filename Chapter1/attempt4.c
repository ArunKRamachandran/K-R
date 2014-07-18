#include<stdio.h>

/* To display the largest word from input's */

main()
 {
 int nc, z, i, j, x, c, chr[30], large[30];
 

 z = 0;
 nc = 0;
 j = 0;
 
 printf("\nEnter some words to select the largest\n");

 while ((c = getchar()) != EOF)
     {
      if (c == ' ' )
        {
         if (nc > z)
 	  {
	   z = nc;
	  
          for (i = 0; i < z; ++i)
	     {
               large[i] = chr[i];
	     } 
           nc = 0;
	    j = 0;
          }
         else
            nc = 0;
            j = 0;
	}
 
      else
        { 
         ++nc;

         if (j < nc)
         {
         chr[j] = c;
         ++j;
         }	
        }
      } 

 printf ("\nLargest word among the input words is\n");

 for (i = 0; i < z; ++i)
     printf("%c",large[i]);
 
 return 0;

 } 
      
