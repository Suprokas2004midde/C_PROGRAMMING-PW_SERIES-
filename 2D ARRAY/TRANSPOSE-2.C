// write a program to print transpose of a matrix..... 
// create an array and store it...
#include<stdio.h>
int main()
{
    // declearation....
    int m;
    printf("Enter the size of row:");
    scanf("%d",&m);
    int n;
    printf("Enter the size of column:");
    scanf("%d",&n);
    int arr[m][n];
    // input taking......
    printf("Enter the elements of the array:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            brr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}