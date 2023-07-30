//print the product  of an array......
#include<stdio.h>
int main()
{
    int product=1,a[5];
    printf("Enter the values of an array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<5;j++)
    {
        product=product*a[j];
    }
    printf("The product of the array is:%d",product);
    return 0;
}