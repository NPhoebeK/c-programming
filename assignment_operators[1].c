#include <stdio.h>

int main() {

   int a = 10;

   // Assign
   int result = a;
   printf("result = %d \n",result);

   // += operator
   result += a;
   printf("result = %d \n",result);

   // -= operator
   result -= a;
   printf("result = %d \n",result);

   // *= operator
   result *= a;
   printf("result = %d \n",result);

   return 0;

}