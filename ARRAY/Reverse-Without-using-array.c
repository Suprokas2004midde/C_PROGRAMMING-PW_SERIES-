// Write a program to reverse the array without using any extra array...
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values of array:\n");
    for(int a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++)
    {
        if(start<end)
        {
            int temp;
            temp=arr[end];
            arr[end]=arr[start];
            arr[start]=temp;
        }
        start++;
        end--;
    }
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}