#include<stdio.h>
int main()
{
int a;
printf("enter the value a:");
scanf("%d",&a);
if(a%2==0)
{
if(a%3==0)
{
printf("%d is even and divisible by 3",a);}
else
{
printf("%d is odd and divisible by 3",a);}
}
else
{
if(a%3!=0)
{
printf("%d is odd and not divisible by 3",a);}
else
{
printf("%d is odd and divisible by 3",a);}
}
return 0;
}
    