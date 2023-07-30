#include <stdio.h>
int main()
{
	int a,b;
    float i,j;
    scanf("%d%d%f%f",&a,&b,&i,&j);
    printf("%d %d\n%.1f %.1f",a+b,a-b,i+j,i-j);
    return 0;
}