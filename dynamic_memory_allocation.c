#include <stdio.h>
#include <stdlib.h>

/**
 * malloc => Memory allocation
 */

int *creating_array(int size);
void printing_array(int *arr, int size);

int main(void)
{
    int size_of_array = 20;
    int *array = creating_array(size_of_array);

    for (int i = 0; i < size_of_array; i++)
    {
        array[i] = i + 1;
    }

    printing_array(array, size_of_array);

    free(array);
    return 0;
}

int *creating_array(int size)
{
    int *arr = (int *)malloc(sizeof(int) * size);
    return arr;
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
