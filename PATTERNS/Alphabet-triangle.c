// video time-1.14.12 min
#include<stdio.h>
int main()
{
    int num;
    printf("How many character you wanted to print:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {    
        int a=64;  // here type the ASCII value you wanted to print.....(for "A"-64,,"a"-96)
        for(int j=1;j<=i;j++)  //the main operation is being executed with the inner loop.....
        {
            int d=a+j;
            char ch=(char)d;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}