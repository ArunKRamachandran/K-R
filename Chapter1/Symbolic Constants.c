#include<stdio.h>

#define LOWER 0    /* lower limit */
#define UPPER 300  /* upper limit */
#define STEP 20    /* step size */

/* program using Symbollic Constants */

main()
 {
  
   int fahr;

   printf("Conversion using Symbollic Constants\n");

   for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
       printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));

 }
