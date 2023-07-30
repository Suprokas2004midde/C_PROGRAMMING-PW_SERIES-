#include<stdio.h>
void leapyear(int x)
{
    if(x%100==0)
    {
        if(x%400==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not a Leap Year");
        }
    }
    else{
        if(x%4==0)
        {
            printf("Leap Year");
        }
        else{
            printf("Not a Leap Year");
        }
    }
    return;
}
int main()
{
    int a;
    printf("Enter the Year:");
    scanf("%d",&a);
    leapyear(a);
    return 0;
}