#include <stdio.h>
/**
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms.
 * By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
 * By considering the terms in the Fibonacci sequence whose values
 * do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
 */

void fibonacci_sum();

int main(void)
{
    fibonacci_sum();
    return (0);
}

void fibonacci_sum()
{
    unsigned long first, second, sum;
    float total;

    first = 1;
    second = 2;

    while (1)
    {
        sum = first + second;
        if (sum > 4000000)
            break;
        if (sum % 2 == 0)
        {
            total += sum;
        }
        first = second;
        second = sum;
    }
    printf("%0.f\n", total);
}