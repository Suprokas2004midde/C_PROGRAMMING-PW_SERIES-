// Find the total number of pairs in the array whose sum is equal to the given value x.....
// user ekta number debe ,and amader seta loop chaliye dekhte hobe je kota number er pair sum korle user number ase....
#include<stdio.h>
int main()
{
    int total=0,arr[10]={2,4,6,8,7,9,3,1,10,5};
    int user;
    printf("Enter the number:");
    scanf("%d",&user);
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]+arr[j]==user)
            {
                printf("(%d,%d)\n",arr[i],arr[j]);
                total++;
            }
        }
    }
    printf("%d",total);
    return 0;
}