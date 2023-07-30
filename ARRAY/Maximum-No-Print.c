// find the  maximum value out of all the elements in the arary.......
// two ways to do it--- 1> choose <limit.h> header file, and INT_MAIN KEYWORD TO DO THIS....
// 2> Create a variable, and store the first number of array then check it with another values if it true then store the number to max...
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[10]={-2,-10,-4,-6,14,-19,-8,-17,-60,-7};
    int max=INT_MIN;
    for(int i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}