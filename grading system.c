#include<stdio.h>
int main ()
{
int eng,kis,bio,chem,hist,average,A,B,C,D,E,fail;
printf("please enter marks in eng\n,kis\n,bio\n,chem\n,his\n");
scanf("%d%d%d%d%d",&eng,&kis,&bio,&chem,&hist);
average=(eng+kis+bio+chem+hist)/5;
printf("average=%d\n",average);
if (average>=90&&average<=100)
{
printf("grade=A",A);
}
else if (average>=80&&average<90)
{
printf("grade=B",B);
}
else if (average>=70&&average<80)
{
printf("grade=C",C);
}
else if(average>=60&&average<70)
{
printf("grade=D",D);
}
if(average>=50&&average<60)
{
printf("grade=E",E);
}
else
{
printf("grade=fail",fail);
}
return 0;
}
