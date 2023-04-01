// Online C compiler to run C program online
#include <stdio.h>

char *reversing_string(char string)
{
    int i, j, len;
    // length of string
    len = 0;
    while (string[len] != '\0')
    {
        len++;
    }

    j = 0;
    for (i = len - 1; i < j; i--)
    {
        char temp = string[j];
        string[j] = string[i];
        string[j] = temp;
        j++;
    }
    return string;
}

int main()
{
    char string = "Hello World!";
    char reversed_str = reversing_string(string);
    while (reversed_str != '\0')
    {
        putchar(reversed_str);
        reversed_str++;
    }
    return 0;
}