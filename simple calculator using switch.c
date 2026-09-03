#include<stdio.h>
int main()
{
int num1,num2;
printf("enter num1 and num2 value:");
scanf("%d %d",&num1,&num2);
int output;
printf("enter case 1\nenter case 2\nenter case 3\nenter case 4");
scanf("%d",&output);
switch(output)
{
case 1:
printf(" %d",num1+num2);
break;
case 2:
printf(" %d",num1-num2);
break;
case 3:
printf("%d",num1*num2);
break;
case 4:
printf(" %d",num1/num2);
break;
}
return 0;
}
    