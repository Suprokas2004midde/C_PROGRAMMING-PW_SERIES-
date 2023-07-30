// print the combination of a value....
#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int c)
{
    return factorial(n)/(factorial(c)*factorial(n-c));// here every factorial jump to the factorial function....
}
int main()
{
    int n,c;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of c:");
    scanf("%d",&c);
    int ncr=combination(n,c);// here we pass by the value of n and c to "coimbination" function
    printf("%d",ncr);
    return 0;
}