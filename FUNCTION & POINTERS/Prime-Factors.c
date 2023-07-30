#include<stdio.h>
void primefactor(int a)
{
    
    for(int i=2;a>1;i++)
    {
        while(a%i==0)
        {
            printf("%d ",i);
            a=a/i;
        }
    }
    return ;
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    primefactor(a);
    return 0;
}