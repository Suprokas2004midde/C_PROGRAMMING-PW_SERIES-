#include<stdio.h>
int main()
{
    int a=20.222;
    float *x,*y;
    x=&a;
    y=x;
    printf("%f %f",*x,*y);
}