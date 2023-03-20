#include <stdio.h>

int main()
{
    char letter = 'A';

    while (letter <= 'z')
    {
        if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
            printf("%c", letter);
        letter++;
    }
    return 0;
}
