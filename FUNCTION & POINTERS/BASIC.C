// there is a besic code of function ......

#include<stdio.h>
void england()
{
    printf("you are in England...\n"); // HERE IS THE 4THE LINE
    return; //5
}
void india()
{
    printf("You are in india....\n"); //HERE IS THE SECOND LINE 
    australia();// HERE WE CALL THE FUNCTION AUSTRALIA..
    return;//7
}
void australia()
{
    printf("You are in Australia...\n"); // THIRD LINE IS HERE NO.3
    england(); // HEREWE CALLING THE ENGLAND FUNCTION....
    return ;//6
}
int main()  /// ALL THE EXECUTION STARTS FROM HERE......
{
    india();  //HERE WE CALL THE FUNCTION INDIA... NO.1
    return 0;//8
}