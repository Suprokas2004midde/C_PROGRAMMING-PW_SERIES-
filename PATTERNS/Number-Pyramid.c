// here we can use two methods ..... 1.Extra variable....2.using mathematics....
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of line:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");        
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}