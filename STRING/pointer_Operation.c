#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4};
    int *ptr = arr;

    // printf("Initial value: %d\n", *ptr); // Output: 1

    // ptr++; // Increment the pointer to point to the next element
    // printf("After ptr++: %d\n", *ptr); // Output: 2

    int *ptr2 = arr;
    printf("After *ptr++: %d\n", *ptr2++); // Output: 1
    printf("After *ptr2: %d\n", *ptr2++);   // Output: 2
    *ptr2++;
    printf("%d\n",*ptr2++);// it will print the current value and then increment this....
    return 0;
}