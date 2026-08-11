#include<stdio.h>

int main()
{
int i=1,n,a=0,b=1,c;
printf("enter the value n:");
scanf("%d",&n);

while (i<=n)
{
printf("%d\n",a);
c=a+b;
a=b;
b=c;
i++;
}
return 0;
}