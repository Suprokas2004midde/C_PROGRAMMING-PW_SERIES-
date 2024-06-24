#include<stdio.h>
int main()
{
    // char str[]="Hellow World"; 
    // this is string initialization using character of array....

    // //str[0]="I there";   @ So, in this type of initialization we can't modify a whole/entire "string" or "word" or "sentence".
    // // we can just modify individual things....

    // str[5]='l';
    // printf("%s\n",str);

    char*ptr="college wallah"; // this is a string initialization using pointer.....
    printf("%s\n",ptr);

    //ptr='a'; // in pointer string we can't modifiye a charater because, in pointer string initialization it allows "read only" file...
    
    ptr="Physics Wallah"; // but we can chage the pointer address to a new string,in memory....
    printf("%s\n",ptr);
    return 0;
}