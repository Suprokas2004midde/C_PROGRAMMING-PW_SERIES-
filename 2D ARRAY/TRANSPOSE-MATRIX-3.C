// write a program to print the transpose of a matrix......(WITH OUT USING EXTRA ARRAY)....
// it should be a square matrix......
#include<stdio.h>
int main()
{
    // declearation....
    int m;
    printf("Enter the size of row:");
    scanf("%d",&m);
    int arr[m][m];
    // input taking......
    printf("Enter the elements of the array:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=i;j<m;j++)
        {
            int temp;
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    // printng
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}