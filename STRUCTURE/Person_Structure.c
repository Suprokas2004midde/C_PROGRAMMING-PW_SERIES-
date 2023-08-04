#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[20];
        int age;
        float salary;
    } ram,sam;
    // Declearing details of ram....
    ram.age=26;
    ram.salary=30000.5;
    strcpy(ram.name,"Ram");
    // Declearing details of sam....
    sam.age=29;
    sam.salary=41253.25;
    strcpy(sam.name,"Sam");
    // printing the name of ram....
    printf("%s\n",ram.name);
    // printing the age of sam.....
    printf("%d",sam.age);
    return 0;
}