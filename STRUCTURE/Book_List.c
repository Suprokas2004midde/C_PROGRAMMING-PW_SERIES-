#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        int page;
        float price;
        char name[115];
    } a,b,c;

    //struct book a;
    a.price=400.99;
    a.page=500;
    strcpy(a.name,"Atomic Habit");

    printf("%s\n",a.name);
    printf("%d\n",a.page);
    printf("%f\n",a.price);

    b.price=300.99;
    b.page=400;
    strcpy(b.name,"Rich Dad Poor Dad");

    printf("\n");
    printf("%s\n",b.name);
    printf("%d\n",b.page);
    printf("%f\n",b.price);

    return 0;
}