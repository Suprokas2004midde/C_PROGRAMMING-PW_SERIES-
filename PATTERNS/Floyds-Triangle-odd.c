// print the given pattern.....
/* 1 
   3 5
   7 9 11
   13 15 17 19
*/
#include<stdio.h>
int main()
{
    int num,a=1;
    printf("Enter the row number:");
    scanf("%d",&num);
    for (int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}