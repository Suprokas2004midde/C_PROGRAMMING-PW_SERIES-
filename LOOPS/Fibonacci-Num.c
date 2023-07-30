// Print the'n'th fibinacci number....?
#include<stdio.h>
int main()
{
    int a=1,b=1,sum=0,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The 'n'th fibonacci number is:%d",sum);//we can use printf within for loop, if we wanted to print the fibonaacci number every time.....
    return 0;
}