#include <stdio.h>

void printing_letters(void);

int main(void)
{
    printing_letters();
    return 0;
}

void printing_letters(void)
{
    char c = 'a';
    while (c >= 'a' && c <= 'z')
    {
        putchar(c);
        c++;
    }
    printf("\n");
}