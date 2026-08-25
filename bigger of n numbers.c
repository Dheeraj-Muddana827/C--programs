#include<stdio.h>

int main()
{
int i,num,count,big=0;
printf("enter the no.of values:");
scanf("%d",&count);
for(i=1;i<=count;i++)
{
printf("enter the num%d value:",i);
scanf("%d",&num);
if(big<num)
big=num;
}
printf("bigger number is %d",big);
    return 0;
}