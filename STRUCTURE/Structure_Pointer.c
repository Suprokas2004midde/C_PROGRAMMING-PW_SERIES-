#include<stdio.h>
#include<string.h>
int main()
{
    
    typedef struct student
    {
        float marks;  // when we change those format, the address of s1 variable is same but the subordinate varible address will change....
        int roll;
        char name[20];
    } student;

    student s1;
    s1.roll=11;
    s1.marks=56.78;
    strcpy(s1.name,"Bimal");

    student* p =&s1;
    printf("%p\n",p);
    printf("%p\n",&s1.marks);
    printf("%p\n",&s1.roll);
    printf("%p\n",&s1.name);
    
    return 0;
}