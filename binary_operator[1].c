#include <stdio.h>
int main()
{
int a=60; /*60=0011 1100*/
int b=13; /*13=0000 1101*/
c=0;
a&b; /*12=0000 1100*/
printf("value of c is %d\n",c);
c=a/b; /*61=0011 1101*/
printf("value of c is %d\n",c);
c=a^b; /*49=0011 0001*/
printf("value of c is %d\n",c);
c=~a; /*-61=1100 0001*/
printf("value of c is %d\n",c);
c=<<2; /*240=1111 0000*/
printf("value of c is %d\n",c);
c=>>2; /*15=0000 1111*/
printf("value of c is %d/n",c);
return 0;
}