//Display this AP - 4,7,10,13,16... upto 'n' terms.

//here is a formula to calculate the Nth value of 'a'...An=a+(n-1)*d....

//and the sum of the nth value is Sn=n/2[2a+(n-1)*d]
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=4;i<=n*3+1;i=i+3)//but it is not a generalise method......
    {
      printf("%d ",i);
    }
    return 0;
}