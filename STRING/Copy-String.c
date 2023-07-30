#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="Suprokas midde";
    char* str=s;
    s[0]='g';
    printf("%s",str);
}
