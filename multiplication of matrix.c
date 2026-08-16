#include <stdio.h>
int main()
{
int m1,n1,m2,n2;
printf("enter no.of rows and columns:");
scanf("%d %d",&m1,&n1);
printf("enter no.of rows and columns:");
scanf("%d %d",&m2,&n2);
int a[m1][n1],b[m2][n2],c[100][100];
int i,j,k;
printf("\nenter matrix one elements:\n");
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nenter matrix 2 elements:\n");
for(i=0;i<m2;i++)
{
for(j=0;j<n2;j++)
{
scanf("%d",&b[i][j]);
}
}
if(n1==m2)
{
for(i=0;i<m1;i++)
{
for(j=0;j<n2;j++)
{
c[i][j]=0;
for(k=0;k<n1;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
printf("multiplication of matrix is :\n");
for(i=0;i<m1;i++)
{
for(j=0;j<n2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else
printf("matrix multiplication not possible:");
return 0;
}


    