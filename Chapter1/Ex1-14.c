#include<stdio.h>

/* Histogram of the frquencies of different characters in  input */

main()
 {
 int c, hs[30], i, j, x = 0;

 for (i = 0; i <= 30; ++i)
    {
     hs[i] = 0;
    }

 printf("\nEnter some characters\n");
 
 while ((c = getchar()) != EOF) {
     for (i = 97; i <=122 ; ++i)
        {
         if ( c == i)
   	   { 
            ++ hs[i - 97];
 	   }
	}
  }

printf("\nHistogram of the frequencies of different characters in input\n");
printf("alphabet  frequency\n");

  for (i = 97; i <= 122; ++i)
     printf("%c  %9d\n", i, hs[i - 97]);
 }

	    	 
