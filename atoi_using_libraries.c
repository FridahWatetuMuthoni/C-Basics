#include <stdio.h>
#include <ctype.h>
#include <limits.h>

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
    while (isspace(s[i])) {
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
    while (isdigit(s[i])) {
        // Check for overflow/underflow
        if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && (s[i] - '0') > (INT_MAX % 10))) {
            return (sign == -1) ? INT_MIN : INT_MAX;
        }

        // Convert digit to integer and add to result
        result = (result * 10) + (s[i] - '0');
        i++;
    }

    // Skip trailing whitespace
    while (isspace(s[i])) {
        i++;
    }

    // Return result with sign
    return sign * result;
}
