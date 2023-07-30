//print the given pattern....video time - 1.50.00 min
/* 1
   0 1
   1 0 1
   0 1 0 1 
   1 0 1 0 1
*/


#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if ((i+j)%2==0)          //if the sum of 'i' and 'j' is even number print 1 or, print 0.....
            printf("1 ");
            else
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}