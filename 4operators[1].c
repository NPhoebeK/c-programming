//program containing the relational,arithmetic,logic,assignment ,operators\*
#include <stdio.h>
int main ()
{
int a=10,b=20,add,result;
//relational operator
result=(a<b);
printf("(a<b)=%d\n",result);
//logical operator
printf("%d!=%d\n",a,b , a!=b);
//assignment operator
result*=a;
printf("result =%d\n",result);
//arithmetic operator
add=a+b;
printf("result of add is=%d\n",add);
return 0;
}
