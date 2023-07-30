// print the given pattern.   video time- 1.15.59 min
/* 1
   A B
   1 2 3
   A B C D 
   1 2 3 4 5
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter how many times you want to print:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        int a=64;
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            { 
                //int d=a+j;
                char ch=(char)(a+j);//here is another method of type casting....
                printf("%c ",ch);    
            }
            else
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}