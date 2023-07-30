// print the index of the maximum value...?
#include<stdio.h>
int main()
{
    int arr[5]={1,6,3,4,5};
    int index=0;
    for(int i=0;i<5;i++)
    {
        if(arr[index]<arr[i])
        {
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}