#include<stdio.h>
#include<math.h>
#include<limits.h>

int main()
{
int i,n,rem,sum=0;
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
if(rem>0)
sum+=rem;
n=n/10;
}
printf(" %d",sum);

    return 0;
}