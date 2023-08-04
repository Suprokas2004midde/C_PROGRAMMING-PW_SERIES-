#include<stdio.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;

    date first,second;

    first.day=19;
    first.month=12;
    first.year=2004;

    second.day=19;
    second.month =12;
    second.year=2004;
     
    int check=0;

    if(first.day!=second.day)   check=1;
    if(first.month != second.month) check=1;
    if(first.year != second.year) check =1;

    if(check==0)
    printf("The dates are same....");
    else
    printf("The Dates Are not Same.....");
    return 0;
}