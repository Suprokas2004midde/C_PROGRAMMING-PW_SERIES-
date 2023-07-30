#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,6,8,6,0};
    int x;
    int index=0;
    printf("Enter the number:");
    scanf("%d",&x);
    for(int i=0;i<10;i++)
    {
        if(arr[i]==x)
       {
        printf("%d is present in the array",x);
        index++;
       }
    }
    if(index>0)
    {
        printf("%d is present in the array:\n",x);
        printf("Total count:%d",index);
    }
    return 0;
}