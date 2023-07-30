#include<stdio.h>
void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main()
{
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("The value of a is- %d\nthe value of b is- %d",a,b);
    return 0;
}