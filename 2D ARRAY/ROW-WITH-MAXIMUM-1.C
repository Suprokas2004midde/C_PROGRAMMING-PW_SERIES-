/// gIVEN A MATRIX HAVING O-1 ONLY ,FIND THE ROW WITH THE MAXIMUM NUMBER OF 1'S......

#include<stdio.h>
int main()
{
    // declearation 
    int m;
    printf("Enter the size of row:");
    scanf("%d",&m);
    int n;
    printf("Enter the size of column:");
    scanf("%d",&n);
    int arr[m][n];
    // input taking
    printf("Enter the elements of the array:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //extra variables...
    int countsum,prevsum=0,maxrow=0;
    for(int i=0;i<m;i++)
    {
        countsum=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1)
            {
                countsum++;
            }
        }
        if(prevsum<countsum)
        {
            maxrow=i;
            prevsum=countsum;
        }
    }
    printf("maximum row with 1 is:%d\n",maxrow+1);
    printf("the total no. of 1 is:%d",prevsum);
    return 0;
}