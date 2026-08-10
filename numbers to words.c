#include<stdio.h>
int main()
{
int i,n,rem,rev=0;
printf("enter a number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
n=0;
while(rev>0)
{
n=rev%10;
switch(n)
{
case 0:
printf("Zero\t");
break;
case 1:
printf("One\t");
break;
case 2:
printf("Two\t");
break;
case 3:
printf("Three\t");
break;
case 4:
printf("Four\t");
break;
case 5:
printf("Five\t");
break;
case 6:
printf("Six\t");
break;
case 7:
printf("Seven\t");
break;
case 8:
printf("Eight\t");
break;
case 9:
printf("Nine\t");
break;
}
rev=rev/10;
}
return 0;
}

    