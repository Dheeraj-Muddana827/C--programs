#include<stdio.h>
int main()
{
int a,b,c,sum;
printf("enter the values a,b,c:");
scanf("%d %d %d",&a,&b,&c);
if(a==b&&b==c)
{
printf ("0");}
else if(a!=b&&b!=c&&a!=c)
{
sum=a+b+c;
printf("total=%d",sum);
}

else if (a==b)
{
printf("%d ",c);
}
else if(b==c)
{
printf("%d",a);
}
else if(a==c)
{
printf("%d",b);
}
else 
{
printf("the value is 0");
}
return 0;
}
    