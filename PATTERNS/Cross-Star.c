//print the given pattern..... here 'n' is always odd
/* *   *
    * *
     *
    * *
   *   *
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(i==j || i+j==num+1) //the mainconcept is the first slide will execute when the row and column should equal...
            {                         // and the second slide will execute when the sum of row and column must equal to (NUM +1) .......
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}