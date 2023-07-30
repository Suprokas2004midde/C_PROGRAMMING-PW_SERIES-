//write a program to count the even digits of a given number....
#include<stdio.h>
int main()
{
    int num,lastdigit,sum=0;//here we have to initiat the value of sum otherwise in c it can store a GARBAGE value....
    printf("Enter the number:\n");
    scanf("%d",&num);
    while(num>0)
    {
        lastdigit=num%10;
        if(lastdigit%2==0)
        {
            sum=sum+lastdigit;
        }
        num=num/10;
    }
    printf("The sum of it's even digits Are:%d",sum);
    return 0;
}