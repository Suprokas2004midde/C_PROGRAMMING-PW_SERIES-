//create a table of marks of 10 students.and print, the roll number of students who's number is below 35.(the roll number is equal to index no.) 
#include<stdio.h>
int main()
{
    int marks[10]={95,65,29,18,10,84,99,26,30,87};
    for(int i=0;i<10;i++)
    {
        if (marks[i]<35)
        {
            printf("%d ",i);
        }
    }
    return 0;
}