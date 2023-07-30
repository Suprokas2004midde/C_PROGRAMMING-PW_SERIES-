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
    //transpose......
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<i;j++)
        {
            int temp;
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    // reverse.....
    for(int i=0;i<m;i++)
    {
        int a=0,b=m-1;
        while(a<b)
        {
            int temp1= arr[i][a];
            arr[i][a]=arr[i][b];
            arr[i][b]=temp1;
            a++;
            b--;
        }
    }
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