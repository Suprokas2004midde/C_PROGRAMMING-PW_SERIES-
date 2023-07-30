// write a program to increase its even indexed element by +10,and odd indexed element by multiple of 2...
#include<stdio.h>
int main()
{
    int arr[10]={2,3,4,5,6,7,8,9,10,11};
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]+10;
           // printf("%d ",arr[i]);
        }
        else
        {
            arr[i]=arr[i]*2;
           // printf("%d ",arr[i]);
        }
    } 
    for(int j=0;j<10;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}