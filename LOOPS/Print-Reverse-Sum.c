#include<stdio.h>
int main()
{
    int num,lastdigit,rev=0,sum=0;
    printf("enter the num:\n");
    scanf("%d",&num);
    while(num>0)
    {
        lastdigit=num%10;
        sum=sum+lastdigit;
        rev=rev*10+lastdigit;
        num=num/10;
    }
    printf("the reverse of if it's digit:%d\n",rev);
    printf("The sum of it's digit is:%d",sum);
    return 0;
}