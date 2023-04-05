#include <stdio.h>
int factorial(int);

int main(void)
{
    int n = 5;
    int fact = factorial(n);
    printf("%d\n", fact);
    return (0);
}

int factorial(int n)
{
    int i, total;

    total = 1;
    for (i = n; i >= 1; i--)
    {
        total *= i;
        printf("%d ", i);
    }
    printf("\n");
    return total;
}