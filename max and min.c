#include<stdio.h>
#include<math.h>

int main()
{
int a[5],i,max,min;
printf("enter array elements ");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
max=INT_MIN;
min=INT_MAX;
for(i=0;i<5;i++)
{
if(max<a[i]){
max=a[i];}
if(min>a[i]){
min=a[i];}
}
printf("max=%d,min%d",max,min);

    return 0;
}