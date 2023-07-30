// print the given pattern 
// A B C D
// A B C D
// A B C D
// A B C D
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        int a=1;
        for(int j=1;j<=num;j++)
        {
            int d=a+64;      /*here we use the method of TYPE CASTING*/
            char ch=(char)d;
            printf("%c ",d);
            a++;
        }
        printf("\n");
    }
    return 0;
}