#include <stdio.h>

int main(void)
{
    // pattern four

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}