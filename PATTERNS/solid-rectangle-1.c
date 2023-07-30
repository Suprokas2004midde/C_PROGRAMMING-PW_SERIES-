#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the Star number in row:");
    scanf("%d",&row);
    printf("Enter the star in column:");
    scanf("%d",&col);
    for(int i=1;i<=row;i++)//outer loop -- it will maintain rows...
    {
        for(int i=1;i<=col;i++)//inner loop -- it will maintain columns.....
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}