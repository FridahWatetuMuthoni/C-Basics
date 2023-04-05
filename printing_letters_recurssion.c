#include <stdio.h>

void printing_letters(char);

int main(void)
{
    char c = 'a';
    printing_letters(c);
    printf("\n");
    return 0;
}

void printing_letters(char c)
{
    if (c > 'z')
        return;

    putchar(c);

    printing_letters(c + 1);
}