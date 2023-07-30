#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="suprokas";
    char* ptr= str;
    // printf("%p\n",ptr);
    // printf("%p",ptr);   //as we know every array and string's address is equal to their first index address.....
    int i=0;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;   // NOTE, we can increment the address...... 
        i++;
    }
    return 0;
}