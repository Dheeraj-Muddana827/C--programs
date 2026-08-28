#include<stdio.h>
int main()
{
int i=0,sum=0,n;
printf("enter the value of n:");
scanf("%d",&n);
while(i<n)
{
sum=sum+(2*i);
i++;
}
printf("the sum is %d",sum);

return 0;
}