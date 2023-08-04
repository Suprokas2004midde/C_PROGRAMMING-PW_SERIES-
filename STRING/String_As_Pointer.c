#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Suprokas Midde";
    char* ptr = str;
    // printf("%p\n",&str[0]);
    // printf("%p",ptr);
    while(*ptr!='\0')
    {
        // ptr means
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}