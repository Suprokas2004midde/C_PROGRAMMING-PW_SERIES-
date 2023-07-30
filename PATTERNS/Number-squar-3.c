//print a given number pattern.... 
/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4*/
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter the row:");
    scanf("%d",&n);
    row =col=n;
    for(int j=1;j<=row;j++)
    {
        for(int i=1;i<=col;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}