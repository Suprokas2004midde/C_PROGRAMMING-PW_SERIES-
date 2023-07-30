// write a program to count digit of a given number......

#include<stdio.h>
int main()
{
    int num,temp,i=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        i++;
        
    }
    printf("%d",i);
    return 0;
}