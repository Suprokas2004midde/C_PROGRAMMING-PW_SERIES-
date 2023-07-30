// count the number of triplets whose sum is equal to the given value x....
#include<stdio.h>
int main()
{
    int total=0,arr[10]={2,4,3,5,6,7,8,9,1,11};
    int user;
    printf("Enter the number:");
    scanf("%d",&user);
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            for(int k=j+1;k<10;k++)
            {
                if(arr[i]+arr[j]+arr[k]==user)
                {
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                    total++;
                }
            }
        }
    }
    printf("%d",total);
    return 0;
}