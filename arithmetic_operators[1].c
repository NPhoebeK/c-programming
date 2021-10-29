#include <stdio.h>
int main ()
{
int a,b,add,sub,mul,div,rem;
printf("enter value of a,b\n");
scanf("%d,%d",&a,&b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
rem=a%b;
printf("results of addition is=%d\n",add);
printf("results of subtraction is =%d\n",sub);
printf("results of multiplication is=%d\n",mul);
printf("results of division is=%d\n",div);
printf("results of remainder is=%d\n",rem);
return 0;
}