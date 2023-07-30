#include<stdio.h>
int main()
{
    int a=45;
    int* b=&a; //// int* declears a pointer.....
    *b=7;  // we can change the value of any address by using pointers.....
    printf("%d\n",a); // *b represents that--- *b er bhitore je address ta ache setar value print koro...
    printf("%p\n",b);
    printf("%p",&*b);
    return 0;
}