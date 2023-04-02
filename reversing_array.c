#include <stdio.h>

void reversing_array(int *arr, int size);
void printing_array(int *arr, int size);

int main(void)
{
    int numbers[] = {30, 85, 64, 78, 96, 45};
    int size = sizeof(numbers) / sizeof(int);

    // printing the original array
    printing_array(numbers, size);

    // reversing the array
    reversing_array(numbers, size);

    // printing the reversed array
    printing_array(numbers, size);
    return 0;
}

void reversing_array(int *arr, int size)
{
    int i, j;

    j = 0;
    for (i = size - 1; i > j; i--)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        j++;
    }
}

void printing_array(int *arr, int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%d", arr[i]);
        if (!(i == (size - 1)))
        {
            printf(", ");
        }

        i++;
    }
    printf("\n");
}