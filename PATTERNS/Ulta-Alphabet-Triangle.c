// print the given pattern .....
/*       A
       A B
     A B C
   A B C D
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of line:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=64;               // which alpahabet or symbol you want to print write the ascii value of it...... 
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            int d=a+k;          // here a symple method of type caasting......
            char ch=(char)d;
            printf("%c ",d);
        }
        printf("\n");
    }
    return 0;
}