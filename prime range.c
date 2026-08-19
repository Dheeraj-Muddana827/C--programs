#include <stdio.h>
void main()
{
int low,high,i,j,k;
printf("enter lower bound:");
scanf("%d",&low);
printf("enter higher bound:");
scanf("%d",&high);
for(i=low;i<=high;i++)
{
j=i;
int count=0;
for(k=1;k<=j;k++)
{
if(j%k==0)
count++;
}
if(count==2)
{
printf("%d\t",j);
}
}
}

    