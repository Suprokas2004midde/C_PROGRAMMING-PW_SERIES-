// TECHNIQUE OF BUBBLE SORT....?
#include<stdio.h>
int main()
{
    int n;
    printf("Entert the size of the array:");
    scanf("%d",&n);
    int arr[n];
    //Taking Input....
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // printing input version:
    printf("The original series is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    // bubble sort....
    for(int i=0;i<n-1;i++) // this is controling pass no...
    {
        printf("\npass %d:(ELEMINATE THE LARGEST VALUE)\n",i+1);
        int a=0,b=a+1;
        for(int j=0;j<n-1-i;j++) // this is contoling the swaping of elements....
        { 
            if(arr[a]>arr[b])
            {
                int temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
            a++;
            b++;
            printf("%d ",arr[j]);
        }
    }
    // printing the sorted element....
    printf("\nThe Sorted Element is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
