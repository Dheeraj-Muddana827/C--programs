#include<stdio.h>
struct student_data
{
int roll;
char name[20];
char sub[10];
float avg;
};
int main(){
struct student_data s1;
scanf("%d",&s1.roll);
scanf("%s",&s1.name);
scanf("%s",&s1.sub);
scanf("%f",&s1.avg);
printf("\n____student details____\n");
printf("roll no is:%d\n",s1.roll);
printf("name is :%s\n",s1.name);
printf("name of the subject:%s\n",s1.sub);
printf("average is:%f",s1.avg);
return 0;
}
    