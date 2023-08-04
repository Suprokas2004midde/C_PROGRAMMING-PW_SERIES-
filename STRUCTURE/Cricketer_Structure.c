/*A record contains name of cricketer,his age,number of test matches that he has played and 
the avarage run that he has scored in each test match. Creat an ARRAY OF STRUCTURE to hold 
records of 3 such cricketer and then write a program to read this records......*/

#include<stdio.h>
int main()
{
    typedef struct cricketer
    {
        char name[20];
        int age;
        int Number_Of_Matches;
        float Avg_Run;
    } cricketer;
    cricketer arr[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the name of player :\n");
        scanf(" %[^\n]s",arr[i].name);
        printf("Enter the age of the player :\n");
        scanf("%d",&arr[i].age);
        printf("Enter the number of matche he played :\n");
        scanf("%d",&arr[i].Number_Of_Matches);
        printf("Enter the avg.Run of the player :\n");
        scanf("%f",&arr[i].Avg_Run);
    }
    for(int i=0;i<3;i++)
    {
        printf("Player Name :%s\n",arr[i].name);
        printf("Player's Age :%d\n",arr[i].age);
        printf("Player's Num_Of_Matches :%d\n",arr[i].Number_Of_Matches);
        printf("Player's Avg_run :%.2f\n",arr[i].Avg_Run);
        printf("\n");
    }
    return 0;
}