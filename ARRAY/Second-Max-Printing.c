//print the second maximum value in the array...
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[7]={-5,11,9,4,8,11,10};
    int max,smax;
    max=INT_MIN;
    smax=INT_MIN;
    for(int i=0;i<7;i++)
    {
        if(max<arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i] && max!=arr[i] ) // this condition will hit if the max>arr[i].....
        {
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}