#include<stdio.h>
int main()
{
    int arr[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int r1,c1,r2,c2;
    printf("Enter the row 1 number:");
    scanf("%d",&r1);
    printf("Enter the col 1 number:");
    scanf("%d",&c1);
    printf("Enter the row 2 number:");
    scanf("%d",&r2);
    printf("Enter the col 2 number:");
    scanf("%d",&c2);
    for(int i=r1-1;i<=r2-1;i++)
    {
        for(int j=c1-1;j<=c2-1;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}