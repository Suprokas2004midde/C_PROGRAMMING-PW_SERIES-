#include<stdio.h>
#include<string.h>
int main()
{
    char str[3]; 
    //char str[]={1,2,3,......};  we can use it .....

    // char str[];
    // scanf("%s"str); we can not use it .... this is an error....
    // we have to declear the value of the string if we want to use it other section...

    // printf("Enter the string:\n");
    // scanf("%[^\n]s",str);
    // printf("Your input was:");
    // puts(str);


   // scanf("%s",str); // here '&' is not required to scan a string...
    // here is a problem with the scanf function === "This will not consider spaces...(only first letter is accessable)"
    /* so here is the solution 
    we can use gets() function to take a string...*/
    
    gets(str);
    printf("Your input was:");
    puts(str); // puts() automatically includes a "\n" with in it..... 
    return 0;
}