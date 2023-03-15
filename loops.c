#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 5)
    {
        printf("Value of i %d\n", i);
        i++;
    }

    // An infinite loop that only stops when -1 is entered
    int count = 0;
    int value = 0;
    int total = 0;
    while (value != -1)
    {
        printf("Enter Value: ");
        scanf("%d", &value);
        if (value != -1)
        {
            total += value;
            count++;
        }
    }
    printf("Total: %d\n", total);
    printf("Total Numbers Entered: %d\n", count);
    float average = total / count;
    printf("The average is : %f\n", average);
    return 0;
}