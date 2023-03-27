#include <stdio.h>

int main(void)
{
    int arr[] = {21, 54, 78, 7, 8, 9, 7};
    // returns how many items are in the array
    int size = sizeof(arr) / sizeof(int);
    printf("%d\n", size);

    printf("The size of an integer is : %lu\n", sizeof(int));
    printf("The size of an charater is : %lu\n", sizeof(char));
    printf("The size of an float is : %lu\n", sizeof(float));
    printf("The size of an double is : %lu\n", sizeof(double));

    return 0;
}