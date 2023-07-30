// print the sum of two number using functions....
#include<stdio.h>
int add(int X,int Y)// here "ADD" IS FUNCTION, AND "INT A"IS PARAMETER/ARGUMENTS...
{
    return X+Y;
}
int main()
{
    int a;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    int b;
    printf("Enter the 2nd number:");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}
/* IN THIS FUNCTIONS VARIABLE "A" IN MAIN FUNCTION AND VARIABLE "A" IN ADD FUNCTION ARE TWO DIFFERENT THINGS...*/