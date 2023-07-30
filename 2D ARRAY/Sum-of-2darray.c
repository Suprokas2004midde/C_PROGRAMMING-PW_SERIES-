// write a program to find the sum of a given matrix n*m .......?

#include<stdio.h>
int main()
{
    int r;
    printf("Enter the value of r:");
    scanf("%d",&r);
    int c;
    printf("Enter the value of c:");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("The sum of the given 2d array is: %d",sum);
    return 0;
}