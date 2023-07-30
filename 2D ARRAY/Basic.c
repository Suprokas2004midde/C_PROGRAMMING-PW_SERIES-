#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the size of row and column:");
    scanf("%d%d",&r,&c);
    int arr[r][c];   //={{1,2,3},{4,5,6},{7,8,9}}; // this is a process of declearing 2D array.......
    printf("Enter the value of array:\n");
    for(int i=0;i<r;i++)  // this is another way of declearing 2D ARRAY....
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}