//print the star triangle by the value given by user.....
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of star:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) //in this case we have to declear different variable with in loop as we compare outer loops value to inner loop....
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}