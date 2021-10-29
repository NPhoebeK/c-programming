#include <stdio.h>
void main ()
{
//declare three variables
int first_number,second_number,total_sum;
//please input the value of the first number to add
printf("enter first_number");
//store the first number using scanf
scanf("%d",&first_number);
//please input the second number
printf("enter the second_number");
//store the second number using scanf
scanf("%d,",&second_number);
//sum of the two numbers
total_sum=first_number+second_number;
//display total sum
printf("%d+%d=%d",first_number, second_number,total_sum);
}
