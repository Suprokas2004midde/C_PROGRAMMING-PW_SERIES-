#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=n;
    int s=1;
    
    for(int f=1;f<=2*n+1;f++)
    {
        printf("%d",f);
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        int num=1;
        for(int j=1;j<=a;j++)
        {
            printf("%d",num);
            num++;
        }
        for(int k=1;k<=s;k++)
        {
            printf(" ");
            num++;
        }
        for(int l=1;l<=a;l++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
        a--;
        s+=2;
    }
    return 0;
}