// write a program to take input the number of students and give them the marks of 3 subjects physics,math,chem.....
#include<stdio.h>
int main()
{
    int s;
    printf("Enter the number of students:");
    scanf("%d",&s);
    int arr[s][3];
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<s;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}