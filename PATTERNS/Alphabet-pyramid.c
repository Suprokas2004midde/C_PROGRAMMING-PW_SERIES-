// print a given pattern of a alphabet pyramid....
//video time -- 2.32.00 min

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of line:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=64;
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            int d=a+k;
            char ch=(char)d;
            printf("%c ",d);
        }
        printf("\n");
    }
    return 0;
}