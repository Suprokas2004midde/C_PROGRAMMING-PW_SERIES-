#include<stdio.h>
int main()
{
    int a=4,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}