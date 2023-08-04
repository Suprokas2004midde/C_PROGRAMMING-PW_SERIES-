#include<stdio.h>
typedef int* pointer;
int main()
{
    int x=5,y=8;
    /*we can write this instead of 
    int x=5;
    int y=8;*/ 
    // but we can not write this ....
    //int* a=&x,b=&y;  or int* a,b;
    // compiler takes this as int *a=&x, int b=&y... but here b is not a pointer but an integer....
    // int *a=&x;
    // int *b =&y;

    // INSTEAD OF THESE WE CAN TRY TYPEDEF FUNCTION......
    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p",b);
    return 0;
}