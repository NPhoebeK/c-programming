#include <stdio.h>

int main() {

   int a = 10, b = 20, result;

   // Equal
   result = (a==b);
   printf("(a == b) = %d \n",result);

   // less than
   result = (a<b);
   printf("(a < b) = %d \n",result);

   // greater than
   result = (a>b);
   printf("(a > b) = %d \n",result);

   // less than equal to
   result = (a<=b);
   printf("(a <= b) = %d \n",result);

   return 0;

}