// print the factorial of a given number......?
#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the factorial number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
        printf("Factorial of %d is: %d\n",i,fact);
    }
    return 0;
}