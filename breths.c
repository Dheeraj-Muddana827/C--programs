#include<stdio.h>
int main()
{
int a;
printf("enter the value a:");
scanf("%d",&a);
if(a>1 && a<72)
{
if(a%8==1||a%8==4)
{
printf("it is lower breth");
}
else if(a%8==2||a%8==5)
{
printf("it is middle breth");
}
else if(a%8==3||a%8==6)
{
printf("it is upper breth");
}
else if(a%8==1)
{
printf("it is side lower");
}
else
{
printf("it is side upper");
}
}
else
{
printf("breth doesn't exist");
}
return 0;
}
    