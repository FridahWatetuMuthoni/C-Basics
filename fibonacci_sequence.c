#include <stdio.h>

void fibonacci_sequence(int n);

int main(void)
{
    int n = 98;
    fibonacci_sequence(n);
    return (0);
}

void fibonacci_sequence(int n)
{
    unsigned long long i, first, second, sum;

    first = 0;
    second = 1;

    for (i = 0; i < n; i++)
    {
        if (first == 0 && second == 1)
        {
            printf("%llu, ", first);
            printf("%llu, ", second);
        }
        sum = first + second;
        printf("%llu", sum);
        if (i == n - 1)
        {
            printf("\n");
        }
        else
        {
            printf(", ");
        }
        first = second;
        second = sum;
    }
}
