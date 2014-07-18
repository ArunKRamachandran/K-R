#include<stdio.h>

/* An attempt to count blanks */

main()
 {
  int c,nc;
  
  nc = 0;
  while ((c = getchar()) != EOF)
     if (c == 0)
        ++nc;
  printf("%d\n", nc);
 }
        
