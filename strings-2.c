#include <stdio.h>

int main(void)
{
    char string[] = "Hello World";
    int len;
    len = 0;

    while (string[len] != '\0')
    {
        len++;
    }
    printf("%d\n", len);
    char string_2[len];

    int i;
    for (i = 0; i < len; i++)
    {
        string_2[i] = string[i];
    }

    printf("%s\n", string_2);

    return (0);
}