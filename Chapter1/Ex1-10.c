#include<stdio.h>

/* to copy i/p to o/p, replacing tab by \t, back space by \b
 and each back slash by \\ */

main()
 {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else   
         putchar(c);

       
    }
 }
         
        
        
