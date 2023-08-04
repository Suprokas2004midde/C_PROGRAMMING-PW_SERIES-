// New thing about structure "TYPEDEF".......
#include<stdio.h>
typedef int wholenumber;
typedef float realnumber;
// mainly typedef is used for renameing of datatype or anything....
int main()
{
    wholenumber x= 5;
    printf("%d\n",x);
    realnumber y = 5.6978;
    printf("%.3f",y);
    return 0;
}