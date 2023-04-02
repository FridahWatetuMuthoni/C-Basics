// Online C compiler to run C program online
#include <stdio.h>

/**
 * The printing_integers function uses recursion to print each digit of an integer one at a time. Here's how it works:
 * The function takes an integer num as an argument.
 * If num is negative, it prints a "-" character to indicate that the number is negative, and then changes num to its absolute value (i.e., makes it positive).
 * If num is greater than or equal to 10, it calls printing_integers recursively with num / 10 as the argument. This effectively removes the last digit of num from the integer.
 * Once the recursion reaches the base case of num being less than 10, it prints the last digit of num using the ASCII code for the digit. This is done by adding the character '0' to num % 10. For example, if num % 10 is 5, then the character '5' will be printed.
 * In the main function, the printing_integers function is called three times with different integers, num1, num2, and num3.
 * Each call to printing_integers prints the digits of the corresponding integer one at a time, in the correct order, with a newline character at the end.
 *
 * For example, if num3 is 1084, the function first recursively calls printing_integers with the argument 108.
 * This call in turn calls printing_integers with the argument 10, and then with the argument 1.
 * Once the recursion reaches the base case of num being less than 10,
 * the function prints '1', then '0', then '8', then '4', each on a separate line.
 */

void printing_integers(int num)
{
    // checking if a number is negative
    // and then printing a negative if it is
    if (num < 0)
    {
        putchar('-');
        num = -num;
    }

    // Removing the last digit using recurssion
    if (num / 10)
    {
        printing_integers(num / 10);
    }

    // printing last digit;
    putchar('0' + num % 10);
}

int main()
{
    // printing an integer
    int num1 = 1;
    int num2 = -20;
    int num3 = 1084;
    printing_integers(num1);
    printf("\n");
    printing_integers(num2);
    printf("\n");
    printing_integers(num3);
    printf("\n");
    return 0;
}