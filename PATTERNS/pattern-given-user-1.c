//print a pattern by the given number of user....
#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the line number:");
    scanf("%d",&row);
    printf("Enter the col number:");
    scanf("%d",&col);
    for(int i=1;i<=row;i++)
    {
        for(int i=1;i<=col;i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}