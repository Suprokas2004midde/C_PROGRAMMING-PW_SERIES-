#include<stdio.h>
int main()
{   
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
      printf("%d 16",i*a);
    }
    return 0;
}