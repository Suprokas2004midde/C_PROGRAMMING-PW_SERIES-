//**use of break; statement..... check a number is prime or not.....
#include<stdio.h>
int main()
{
    int num,i,cpy;
    printf("Enter the number:\n");
    scanf("%d",&num);
    cpy=num;
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
        printf("It is not a prime number:");
        break;
        }
    }
    if(num==1)
    {
        printf("It is neither prime nor composite:");
    }
    if(cpy==i)
    {
        printf("It is a prime number:");
    } 
    return 0;
}