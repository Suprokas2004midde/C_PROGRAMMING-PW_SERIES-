#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of line:");
    scanf("%d",&num);
    int ml=num/2+1;
    int space=ml-1;
    int star=1;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=star;k++)
        {
            printf("* ");
        }
        if(i<ml)
        {
            space--;
            star=star+2;
        }
        else
        {
            space++;
            star=star-2;
        }
        printf("\n");
    }
    return 0;
}