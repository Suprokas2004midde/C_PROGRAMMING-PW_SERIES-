//Find the difference between the sum of elements at even indices ti the sum of element at odd indices...
#include<stdio.h>
int main()
{
    int difference,sodd=0,seven=0,arr[10]={2,5,8,10,122,54,21,30,24,12};
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            seven=seven+arr[i];
        }
        else
        {
            sodd=sodd+arr[i];
        }
    }
    difference=seven-sodd;
    printf("%d",difference);
    return 0;
}