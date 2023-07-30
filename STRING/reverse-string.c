#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    puts("enter the string:");
    scanf("%[^\n]s",str);
    
    int size=0;
    int i=0;
    while(str[i]!='\0')  // this important for size count....
    {
        size++;
        i++;
    }
    int start=0;
    int end=size-1;
    while(start<end)
    {
        char temp;
        temp=str[end];
        str[end]=str[start];
        str[start]=temp;
        start++;
        end--;
    }
    puts("the reverse string is:");
    puts(str);
    printf("The size of the string is:");
    printf("%d",size);
    return 0;
}