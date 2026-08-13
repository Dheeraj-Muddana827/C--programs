#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,arr[100];
    printf("enter no.of elements: ");
    scanf("%d",&n);
    int temp;
    printf("enter array elements \n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
    if(arr[j]==0)
    {
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
    }
    }
    for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
    }
    return 0;
}