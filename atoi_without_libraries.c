#include <stdio.h>

// Define our own isspace function
int my_isspace(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v');
}

// Define our own isdigit function
int my_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

// Define our own INT_MAX and INT_MIN constants
#define MY_INT_MAX 2147483647
#define MY_INT_MIN (-2147483648)

/**
 * _atoi - converts a string to an integer
 * @s: the string that is being converted
 *
 * Return: returns the integer
 */

int _atoi(char *s)
{
    unsigned int result = 0;
    int sign = 1;
    int i = 0;

    // Skip leading whitespace
    while (my_isspace(s[i])) {
        i++;
    }

    // Check sign
    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    // Convert digits to integer
    while (my_isdigit(s[i])) {
        // Check for overflow/underflow
        if (result > (MY_INT_MAX / 10) || (result == MY_INT_MAX / 10 && (s[i] - '0') > (MY_INT_MAX % 10))) {
            return (sign == -1) ? MY_INT_MIN : MY_INT_MAX;
        }

        // Convert digit to integer and add to result
        result = (result * 10) + (s[i] - '0');
        i++;
    }

    // Return result with sign
    return sign * result;
}
