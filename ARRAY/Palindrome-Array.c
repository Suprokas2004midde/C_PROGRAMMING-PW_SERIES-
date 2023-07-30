#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an Array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int start=0;
    int end=n-1;
    int palindrome=0;// it's for print the output once... otherwise it print multiple time over the loops...
    for(int j=0;j<n;j++) // main logic starts from here....
    {
        if(start<end)
        {
            if(arr[start]==arr[end])
            palindrome++;
            else
            palindrome;
        }
        start++;
        end--;
    }
    if(palindrome>0)
    printf("This is a palindrome array:");
    else
    printf("This is not a palindrome array:");
    return 0;
}