#include<stdio.h>
#include<limits.h>
int main()
{
    int a;
    printf("Enter the number of row:");
    scanf("%d",&a);
    int b;
    printf("Enter the number of col:");
    scanf("%d",&b);
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=INT_MIN;
    int row=0,col=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
                row=i;
                col=j;
            }
        }
        printf("\n");
    }
    printf("The maximum value of the array is: %d\n",max);
    printf("The index of the variable is:(%d,%d)",row,col);
    return 0;
}