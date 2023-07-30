#include<stdio.h>
int factorial(int x)
{
    int fact =1;
    for(int l=1;l<=x;l++)
    {
        fact=fact*l;
    }
    return fact;
}
int combination(int i,int j)
{
    return factorial(i)/(factorial(j)*factorial(i-j));
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int a=1;a<=n-i;a++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            int ncr=combination(i,j);
            printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}