// Accessing Structure variable using pointer.....?
#include<stdio.h>
int main()
{
    typedef struct student
    {
        int rollno;
        float marks;
        char name[30];
    } student; // the structure datatype is decleared properly.....

    student s1; // here we declearing the "s1" variable....
    // let's declear the pointer...
    student* p1=&s1;
    // now we can (access)/(modify)/(initializing) the structure through pointer 
    (*p1).marks=32.685;
    // printing the value using dot operator... 
    printf("%.3f",s1.marks);
    return 0;
}