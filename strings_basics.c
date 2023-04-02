#include <stdio.h>

void print_string(char *string);
int _strlen(char *string);

int main(void)
{
    char string[] = "Hello World";
    print_string(string);
    printf("\n");

    // string length
    int str_length = _strlen(string);
    printf("The length of the string is: %d\n", str_length);
    return (0);
}

void print_string(char *string)
{
    // i am dereferencing the pointer so that i can know when i get to the end of the string
    while (*string != '\0')
    {
        // am printing each charater at each memory address
        putchar(*string);

        // increasing the pointer to get to the next address
        string++;
    }
}

int _strlen(char *string)
{
    int len = 0;

    while (string[len] != '\0')
    {
        len++;
    }
    return len;
}