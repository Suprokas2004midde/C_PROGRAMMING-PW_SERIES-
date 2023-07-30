// WRITE A PROGRAM TO PRINT THE ROW NUMBER HAVING MAXIMUM SUM IN THE GIVEN ARRAY.....

#include <stdio.h>
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
        // calculating the sum of each row.....
        countsum=0;
        for(int j=0;j<n;j++)
        {
            countsum=countsum+arr[i][j];
        }
        //check
        if(prevsum<countsum)
        {
            maxrow=i;
            prevsum=countsum;
        }
       
    }
    // printing the output.....
    printf("The rpw having maximum number is:%d\n",maxrow+1);
    printf("The sum is:%d",prevsum);
    return 0;
}