#include<stdio.h>
int main()
{
    int num,sum=1;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The prime factors of the number is:\n");
    for(int i=2;num>1;i++)
    {
        while(num%i==0)
        {
           printf("%d",i);
           num=num/i;
        }
    }
    return 0;
}