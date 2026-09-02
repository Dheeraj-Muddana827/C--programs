#include<stdio.h>

int main()
{
    int i,a,sum=0;
    i=1;
    printf("enter the a value:");
    scanf("%d",&a);
    while (i<=a)
    {
    sum=sum+i;
    i++;
    }
    printf("%d",sum);
    return 0;
}