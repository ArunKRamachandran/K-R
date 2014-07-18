#include<stdio.h>

/* print Celcious-Fahrenheit table..*/

main()
 {

  float fahr, cel;
  float lower, upper, step;

  printf(" Celcious - Fahrenheit conversion Table\n");

  lower = 0;
  upper = 300;
  step = 20;

  cel = lower;
  while (cel <= upper)
    {
     fahr = (9.0/5.0) * cel + 32.0;
     printf("%3.0f %6.1f\n", cel, fahr);
     cel = cel + step;
    }
 }

