#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct car
    {
        int speed;
        float price;
        char name[20];
    } car;

    typedef struct supercar
    {
        car normal;
        char feature[50];
    } supercar;
    
    supercar bugati;
    // Declearing....
    strcpy(bugati.normal.name,"Bugati");
    bugati.normal.price=10000000;
    strcpy(bugati.feature,"This has the maximum speed");
    // printing.....
    printf("%.2f\n",bugati.normal.price);
    printf("%s\n",bugati.normal.name);
    printf("%s",bugati.feature);
    
    return 0;
}