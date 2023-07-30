// WRITE A PROGARAM TO PRINTWAVE FROM OF A GIVEN ARRAY.....(VERTICALLY) ......
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
    // operation....
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int k;
            if(j%2!=0)
            {
                k=m-1-i;
                printf("%d ",arr[k][j]);
            }
            else
            {
                k=i;
                printf("%d ",arr[k][j]);
            }
        }
        printf("\n");
    }
    return 0;
}