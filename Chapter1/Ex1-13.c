#include<stdio.h>

/* A histogram to display no.of words in it's input */

main()
 {
  int c, nc, i, hs[25], nw[25], x, j, z, a;
  
  i = 0;
  nc = 0;
  x = 0;
  z = 1;
  a = 0;

  printf("Enter some words separated by blank spaces\n");

  while ((c = getchar()) != EOF) {
	if (c != ' ')        
	   ++nc;
        if (nc > z)
           z = nc;
        if (c == ' ')
           {
            ++a;
            hs[i] = nc;
            ++i;
            nc = 0;
           }
       }

 printf("\nNo.\tOccurance\n");
 
 
 for (i = 1; i <= z; ++i)
   {
    for (j = 0; j <= a+1; ++j)
      {
       if (hs[j] == i)
        {
         ++x;
        }
      }
    nw[i] = x;
    x = 0;
    }

for (i = 1; i <= z; ++i)
  printf("%2d %7d\n", i, nw[i]);
 }
  
     
