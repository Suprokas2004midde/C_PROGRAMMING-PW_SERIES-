// write a program to print the sum of digits of a given number....

#include<stdio.h>
int main()
{
    int num,sum=0,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        temp=num%10;
        sum=sum+temp;
        num=num/10;
    }
    printf("The sum of digits is:%d",sum);
    return 0;
}