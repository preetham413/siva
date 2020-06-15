#include<stdio.h>
int sum of digits (int num);
int main()
{
int num,sum;
printf("Enter any number to find sum of digits:");
scanf("%d",&num);
sum=sum of digits of%d=%d",num,sum);
return 0;
}
int sum of digits(int num)
{
if (num==0)
return 0;
return((num%10)+sum of digits(num/10))
