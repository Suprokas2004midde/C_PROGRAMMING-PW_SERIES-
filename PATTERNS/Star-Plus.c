// print the given pattern.....{video time-1.27.00}(CONDITION - num will always odd)
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
    if(num%2!=0)
    {
      for(int i=1;i<=num;i++)
      {
         for(int j=1;j<=num;j++)      
         {
            if(j==num/2+1||i==num/2+1) // the generalise from of the code is the value of "j" and "i" should be equal to (n/2+1)....
             {
                printf("* ");
             }
            else 
            printf("  ");
         }
         printf("\n");
      }
    }
    else
    printf("Input Error");
    return 0;
}