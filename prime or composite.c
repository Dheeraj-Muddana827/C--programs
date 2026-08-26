#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter n value:");
scanf("%d",&n);
if(n==0||n==1)
{
printf("it is neither prime not composite number ");
}
else
{
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
printf("%d is prime",n);
else
printf("%d is composite",n);
}

return 0;
}
    