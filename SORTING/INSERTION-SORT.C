#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); 
    }
    for(int i=1;i<n;i++)
    {
        int cur=i;
        int chk=cur-1;
        while(chk>=0 && arr[chk]>arr[cur])
        {
            int temp=arr[cur];
            arr[cur]=arr[chk];
            arr[chk]=temp;
            cur--;
            chk--;
        }
        printf("pass-%d\n",i);
        for(int k=0;k<n;k++)
        {
            printf("%d ",arr[k]);
        }
        printf("\n"); 
    }
    printf("\n FINAL SORTED ARRAY IS:\n");
    for(int t=0;t<n;t++)
    {
        printf("%d ",arr[t]);
    }
    
}