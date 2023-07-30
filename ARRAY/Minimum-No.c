//find the minimium value withiun
#include<stdio.h>
int main()
{
    int min,arr[10]={2,5,15,-1,65,84,95,-15,-25,-95};
    min=arr[0];
    for(int i=0;i<10;i++)
    {
        if(min<arr[i]);
        min=arr[i];
    }
    printf("%d",min);
    return 0;
}