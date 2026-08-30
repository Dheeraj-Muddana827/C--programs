#include<stdio.h>

int main()
{
int i=1,a,n;
printf("enter a value:");
scanf("%d",&a);
printf("enter the value of n:");
scanf("%d",&n);
do
{
printf("%d*%d=%d\n",n,i,n*i);
i++;
}while(i<=a);
return 0;
}