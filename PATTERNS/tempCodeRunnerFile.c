// print the given pattern.....(CONDITION - num will always odd)
/*   *
     *
 * * * * * 
     * 
     * 
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter An odd numbber:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(j==3||i==3)
            {
                printf("*");
            }
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}