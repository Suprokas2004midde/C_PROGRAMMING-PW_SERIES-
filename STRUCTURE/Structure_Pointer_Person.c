#include<stdio.h>
#include<string.h>
typedef struct person
{
    int age;
    float weight;
} person;
person change(person* ps1)
{
    // (*ps1).age=45;
    // (*ps1).weight=75.1;
    /*   ANOTHER WAY OF ACCESSING STRUCTURE THROUGH POINTER   */
    ps1->age=46;
    ps1->weight=50.65;
}
int main()
{
   
    person p1={11,23.7};

    // p1.age=11;
    // p1.weight=23.7;

    printf("%d\n",p1.age);
    printf("%.3f\n",p1.weight);
    change(&p1);
    printf("%d\n",p1.age);
    printf("%.3f\n",p1.weight);
    return 0;
}