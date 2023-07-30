#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int j=0;j<=4;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
    return 0;
}