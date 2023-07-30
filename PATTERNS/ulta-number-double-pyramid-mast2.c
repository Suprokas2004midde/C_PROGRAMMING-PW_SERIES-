#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of line:");
    scanf("%d",&n);
    int ml=n+1;
    int c=n;
    int space=1;
    int a=1;
    for(int f=1;f<=2*n+1;f++)
    {
        if(f<ml)
        {
          printf("%d ",a);
          a++;
        }
        else
        {
            printf("%d ",a);
            a--;
        } 
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        int num=1;
        for(int j=1;j<=c;j++)
        {
            printf("%d ",num);
            num++;
        }
        for(int k=1;k<=space;k++)
        {
            printf("  ");
        }
        for(int l=c;l>0;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
        space=space+2;
        c--;
    }
    return 0;
}