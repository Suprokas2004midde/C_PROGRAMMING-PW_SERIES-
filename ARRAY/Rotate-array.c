//write a program to rotate an array by k times.....(right)
// this is the easy method but it can be optimized.....
#include<stdio.h>
void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void rotate(int a[], int n, int count)
{
    int temp;
    while (count>0)
    {
        temp=a[n-1];
        for(int i=n-1;i>=1;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        count--;
    }
}
int main()
{
    int a[8]={1,2,3,4,5,6,7,8};
    display (a,8);
    int k=22;
    k=k%8;
    rotate(a,8,k);
    display(a,8);
    return 0;
}