#include<stdio.h>

/* to print a Fahreinheit to Celsius conversion table */

main()
 {
  
   int fahr,cel;
   int lower = 0,upper = 300,step = 20;

   fahr = lower;
   while(fahr <= upper)
     {
      cel = 5 * (fahr-32) / 9;
      printf("%d\t%d\n", fahr, cel);
      fahr = fahr + step;
     }
  }


