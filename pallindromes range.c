#include<stdio.h>
int main()
{
int low,upp,i,j,rev,rem,count=0;
printf("enter lower bound:");
scanf("%d",&low);
printf("enter upper bound:");
scanf("%d",&upp);
int org;
for(i=low;i<upp;i++)
{
j=i;
rev=0;
while(j>0)
{
rem=j%10;
rev=rev*10+rem;
j=j/10;
}
if(rev==i)
{
printf("%d\t",rev);
count+=1;
}
}
printf("\nthe no.of pallindromes btw %d and %d is %d\n",low,upp,count);
return 0;
}

    