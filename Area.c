#include <stdio.h>

int main() {
   const int  length = 5;
   const int  width = 15;
   const char nLine = '\n';
   int area;  
   
   area = length * width;
   printf("value of area : %d", area);
   printf("%c", nLine);

   return 0;
}