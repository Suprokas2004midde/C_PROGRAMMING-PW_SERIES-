#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Suprokas midde";
    char*str2="Hellow World";
    char* ptr=str;// AS IT'S ALREADY AN ADDRESS....
    /* (char *ptr = str  This creates a pointer ptr and assigns it the address of the first 
    element of the array str. Since str is ALREADY AN ADDRESS (the address of the first character
    of the array), we don't need to use &str.)*/
    ptr++;// now,pointer points to the 'u' 
    //*str2++;
    *ptr='v'; // and in this line 'u' has changed to 'v'........(THIS LINE ADDRESSING AT THE VALUE OF SECOND INDEX OF THE STRING..AND WE CAN MODIFIE THE VALUE )
    printf("%p\n",&ptr); // &ptr means this shows address of pointer....
    printf("%c\n",*ptr); // *ptr means this shows a value on which the pointer is addressing at.....
    printf("%p\n",str);// &str means this shows address of string....
    printf("%s\n",ptr); // only str means this will start printing the string from where pointer addresses....
    printf("%c\n",str2);
    printf("%c",*str2); // if i put %c format specifier and type (str2) then it will print "d"(last character of the sentence)
    // but if i type (*str2) then it will print the "H".... because, *ptr means this the address of the first character("H") of the array........  
    return 0;
}