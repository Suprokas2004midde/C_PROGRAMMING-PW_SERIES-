//Count the number of elementsin given array greater than number "n"....
#include<stdio.h>
int main()
{
    int n,x=0,arr[10]={2,4,5,6,8,10,7,48,21,35};
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        if(arr[i]>n)
        {
            printf("%d ",arr[i]);
            x++;
        }
    }
    printf("\n");
    printf("%d",x);
    return 0;
}
