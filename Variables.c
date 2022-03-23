#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main () {

   /* variable definition: */
   int a, b;
   int c;
   float f;
 
   /* actual initialization */
   a = 5;
   b = 10;
  
   c = a + b;
   printf("value of c : %d \n", c);

   f = 40.0/3.0;
   printf("value of f : %f \n", f);
 
   return 0;
}