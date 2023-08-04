#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct car{
        int speed;
        float price;
        char name[10];
    } wheeler;

    wheeler bus; // we can use it....
    //struct car bus; (as well as it....)
    bus.price=5000099.5;
    bus.speed=60;
    strcpy(bus.name,"Volvo");

    // printing....
    printf("%s\n",bus.name);
    printf("%d",bus.speed);
    return 0;
}