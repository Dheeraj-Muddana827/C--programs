#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter a ,b,c,d value :");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b)
{
if(a>c)
{
printf("%d is big",a);
}
else{
printf("%d is big",c);}
if(a>d)
{
printf("%d is big",a);}
else{
printf("%d is big",d);}
}
else if(b>c)
{
if(b>d)
{
printf("%d is big",b);}
else{
printf("%d is big",d);}
}
else if(c>d)
{
printf("%d is big",c);}
else
{ printf("%d is big",d);}

return 0;
}
    