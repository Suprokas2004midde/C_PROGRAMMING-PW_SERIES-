#include<stdio.h>
int main()
{
    int a=3,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}