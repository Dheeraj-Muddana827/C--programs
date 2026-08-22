#include<stdio.h>
#include<string.h>
int main()
{
char str[50],count=0;
printf("enter a string:");
gets(str);
for(int i=0;str[i]!='\0';i++)
{
count++;
}
printf("%d",count);
return 0;
}
