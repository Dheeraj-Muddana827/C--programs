#include <stdio.h>
int main()
{
int i,n,sum=0;
printf("enter a number:");
scanf("%d",&n);
int org=n;
for(i=1;i<n;i++)
{
if(n%i==0)
{
sum=sum+i;
}
}
if(sum==org)
printf("it's a perfect number");
else 
printf("not a perfect number");
return 0;
}