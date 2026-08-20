#include<stdio.h>
#include<string.h>
struct student 
{
int marks[6];
float avg;
};
int main()
{
int n,i;
printf("enter no.of students:");
scanf("%d",&n);
struct student s[n];
for(i=0;i<n;i++)
{
printf("\n____enter s%d details____\n",i+1);
printf("\nenter s%d marks:\n",i+1);
float total=0;
for(int j=0;j<6;j++)
{
printf("enter sub %d marks:",j+1);
scanf("%d",&s[i].marks[j]);
total+=s[i].marks[j];
}
printf("\n total marks %f ",total);
s[i].avg=(total/n);
printf("\n average is %.2f",s[i].avg);
}
return 0;
}

    