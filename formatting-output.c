#include <stdio.h>

void left_justified()
{
    int num1, num2, num3, num4, num5;
    num1 = 1;
    num2 = 12;
    num3 = 123;
    num4 = 1234;
    num5 = 12345;

    printf("%8d     %-8d\n", num1, num1);
    printf("%8d     %-8d\n", num2, num2);
    printf("%8d     %-8d\n", num3, num3);
    printf("%8d     %-8d\n", num4, num4);
    printf("%8d     %-8d\n", num5, num5);
}

int main(void)
{
    int i, j;
    char string;
    int num;
    int num2;
    num = 56;
    num2 = 30;
    string = '*';

    for (i = 0; i <= 5; i++)
    {
        for (j = i; j > 0; j--)
        {
            printf("%c", string);
        }
        printf("\n");
    }
    printf("%x\n", 32);

    left_justified();
    printf("\n");

    printf("%-8d", num);
    printf("%-8d", num2);
    printf("\n");
    return 0;
}