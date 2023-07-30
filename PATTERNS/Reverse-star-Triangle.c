// print the given ulta triangle paattern.....
/* * * * *
   * * *
   * *
   * 
*/
//there are many method to solve it.... this is oine of them......
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of stars:");
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}