#include<stdio.h>
int main()
{
    float a=100.00;
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%f\n",a);
        a=a/2;
    }

}