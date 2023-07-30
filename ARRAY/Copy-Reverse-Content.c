#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of array:\n");
    for(int a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int brr[n];
    int j=0;
    for(int i=1;i<=n;i++)
    {
         brr[j]=arr[n-i];
         j++;
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",brr[k]);
    }
    return 0;
}