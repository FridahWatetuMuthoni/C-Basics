#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n = 5;
    int fact = factorial(n);
    printf("%d\n", fact);
    return (0);
}

int factorial(int n)
{
    if (n == 0)
    {
        return (1);
    }
    return (n * factorial(n - 1));
}