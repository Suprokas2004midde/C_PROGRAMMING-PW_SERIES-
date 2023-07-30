// write a program to find the maximum & minimum value of a 2d array ........?
/* in this question first, creat an extra variable and initialize with minimum value...
   then compare it with the rest of the...*/
#include<stdio.h>
#include<limits.h>
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
    int min=INT_MAX;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {  
            if(min>arr[i][j])
            {
                min=arr[i][j];
            }
        }
    }
    printf("the minimum value of this array is:%d",min);
    return 0;
}