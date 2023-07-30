#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no.of line:");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=a;k++)
        {
            printf("*");
        }
        printf("\n");
         a--;
    }
    return 0;
}