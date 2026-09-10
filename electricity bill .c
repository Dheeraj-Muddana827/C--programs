#include<stdio.h>
int main()
{int units;
float amt,total;
printf("enter no.of units:");
scanf("%d",&units);
if(units>0&&units<50)
{
amt=units*0.50;}
else if(units>=50&&units<100)
{
amt=units*0.75;}
else if (units>=100&&units<250)
{
amt=units*1.20;}
else {
amt=units*1.50;}
total=amt+amt*0.20;
printf("electricity bill=%.2f",total);
return 0;}
