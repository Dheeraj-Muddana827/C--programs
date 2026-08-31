#include<stdio.h>

int main()
{
int i=1,a,n;
printf("enter the value a:");
scanf("%d",&a);
printf("enter the value n:");
scanf("%d",&n);
while (i<=a)
{
printf("%d\n",n*i);
i++;}

    return 0;
}