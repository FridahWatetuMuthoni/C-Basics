// Online C compiler to run C program online
#include <stdio.h>

void reversing_string(char *string)
{
    int i, j, len;

    // length of string
    len = 0;
    while (string[len] != '\0')
    {
        len++;
    }

    j = 0;
    for (i = len - 1; i > j; i--)
    {
        char temp = string[j];
        string[j] = string[i];
        string[i] = temp;
        j++;
    }
}

int main()
{
    char string[] = "Hello World!";
    reversing_string(string);
    printf("%s\n", string);
    return 0;
}