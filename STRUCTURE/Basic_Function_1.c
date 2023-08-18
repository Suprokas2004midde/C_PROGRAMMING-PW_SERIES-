// Basic function declearation of structure.........
// in concept of structure we have define the structure as a global variable....(LOCAL VARIABLE{STRUCTURE} ARE NOT ALLOWED .....)
#include<stdio.h>
#include<string.h>
// this type of declearation we called global declearation......
typedef struct child
    {
        char name[25];
        int roll;
        float marks;
    } student;
// here "void" is datatype, "dispaly" is function's name,"student" is a datatype of passed variable,"s1" is passed variable name....
void display(struct child s1) // here struct_child is a structure datatype ..we can also write "student"......
{
    printf("%s\n",s1.name);
    printf("%d",s1.roll);
}
int main()
{
    student s1;
    strcpy(s1.name,"Suprokas Mide");
    s1.marks=75.26;
    s1.roll=10;
    display(s1);

    return 0;
}
