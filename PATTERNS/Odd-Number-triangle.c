///print the given pattern
// 1
// 1 3
// 1 3 5
// 1 3 5 7
/*MUST SEE THE DRYRUN BEHIND THE LOOP (PW,Video Time-58:33min)*/
#include<stdio.h>
int main()
{
    int num;
    //int a=1;  if we put the a variable here the value of 'a' will increase every time(within the inner loop aand also in outer loop)
    printf("Enter the number of line:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
      int a=1;//if we put the 'a' variable here value of a will increase only in inner loop ont in the case of outer loop...
      //here the value of 'a' will revaluate to 1 after executing the innere loop once...
       for(int j=1;j<=i;j++)
       {
         printf("%d ",a);
         a=a+2;
       }
       printf("\n");
    }
    return 0;
    }
