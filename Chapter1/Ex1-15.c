#include<stdio.h>

/* Temperature conversion using function */

float  celsius(float);

main()
 {
  float fahr,c;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
 
  fahr = lower;
  while (fahr <= upper) {
      c = celsius(fahr);
      printf("%3.0f %6.1f\n", fahr, c);
      fahr = fahr + step;
    }
 return 0;
 }

float celsius(float fahr)
 {
 float c;
 c = (5.0/9.0) * (fahr - 32.0); 
 return c;
 } 
