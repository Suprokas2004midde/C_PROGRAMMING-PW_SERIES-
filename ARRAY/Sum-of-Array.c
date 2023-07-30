//print the sum of an array....
#include<stdio.h>
int main()
{
    int sum=0,arr[5];
    printf("Enter the value of arrays:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum of this array is:%d",sum);
    return 0;
}