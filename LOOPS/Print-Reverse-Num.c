//Write a program to pprint reverse of a given number.....
#include<stdio.h>
int main()
{
    int num,lastdigit,rev=0;
    printf("enter the num:");
    scanf("%d",&num);
    while(num>0)
    {
        lastdigit=num%10;
        rev=rev*10+lastdigit;
        num=num/10;
    }
    printf("the reverse of if it's digit:%d",rev);
    return 0;
}