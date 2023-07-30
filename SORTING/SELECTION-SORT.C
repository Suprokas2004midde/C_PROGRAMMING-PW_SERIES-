#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // selection sort....
    for(int i=0;i<n-1;i++)
    {
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++)
        {
           if(min>arr[j])
           {
               min=arr[j];
               minidx=j;
           }
        }
        int temp=arr[i];
        arr[i]=arr[minidx];
        arr[minidx]=temp;
    }
    // out put
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}