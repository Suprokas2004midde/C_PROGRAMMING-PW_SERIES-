// WRITE A PROGRAM TO PRINT THE WAVE FROM (HORIZENTAL) OF A GIVEN MATRIX....? 

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
    // OPERATION.....
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int a=0,b=n-1;
            if(i%2!=0)
            {
                int temp=arr[i][a];
                arr[i][a]=arr[i][b];
                arr[i][b]=temp;
                a++;
                b--;
            }
        }
    }
    // print
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}