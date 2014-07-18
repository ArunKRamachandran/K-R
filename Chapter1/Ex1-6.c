#include<stdio.h>

/* To Verify that the expression getchar() != EOF is 0 or 1 */

main()
 {

  int c;
  c = (getchar() != EOF);
  
  printf("C = %d\n", c);
 }
