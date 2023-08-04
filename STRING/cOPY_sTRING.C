#include<stdio.h>
int main()
{
    char str[]="Hellow world";
    printf("%s\n",str);
    char*ptr=str;
    //str[0]='s';
    *ptr='m'; // it is pointing at a single address of above string....(So, we can't replece it with a whole word/string.)(We can just replace a single word.)
    printf("%s",ptr);
    return 0;
}