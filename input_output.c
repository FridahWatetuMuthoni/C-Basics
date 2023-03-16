#include <stdio.h>

void sizes()
{
    int i;
    double d;
    char c;

    printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
    printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
    printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
}

int main()
{
    char c;
    printf("Enter a Charater: ");
    c = getchar();
    putchar(c);
    printf("\n");

    printf("Who: %s, Size:%d, cost:%5.2f \n", "You", 12, 1.2);

    sizes();
    return 0;
}