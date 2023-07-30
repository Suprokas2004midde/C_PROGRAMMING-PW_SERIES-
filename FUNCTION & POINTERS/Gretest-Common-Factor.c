// Write a function to compute the gretest common divisor of two given number....
#include<stdio.h>
int min(int x,int y)
{
    if(x>y)
    return y;
    else
    return x;  //This function will return the minimum value.....
}
int gcd(int x,int y)
{
    int hcf;
    int minimum = min(x,y); ///here is the second step.(WE DECLEAR THE MIN FUNCTION...)
    for(int i=minimum;i>1;i--)  // here is the main logic...(the maximum common devider can't exceed the minimum number....)
    {                           //SO,HERE I IS INICIALIZED TO THE MINIMUM NUMBER (given by user),THEN WE CHECK THE NUMBER UNTILL IT'S VALUE IS BIGGER THAN 1.
        if (x%i==0 && y%i==0)   // IN THIS CONDITION WE WILL CHECK IF THE VALUE OF I IS DIVISIBLE BY BOTH THE "X"AND "Y".
        {
            hcf=i;  //if the if condition fulfilled the the hcf return the i and exit the loop...
            break;
        }
    }
    return hcf;
}
int main()
{
    int a;
    printf("Enter the val;ue of a:");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b:");
    scanf("%d",&b);
    int hcfk = gcd(a,b);  //here is the 1st step (WE DECLEAR THE FUNCTION....)
    printf("The gcd of %d and %d is :%d ",a,b,hcfk);  // it is the last thing and this will print the gcd value....
    return 0;
}
