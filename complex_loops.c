#include <stdio.h>

void loop_one()
{
    int i, j;

    for (i = 0, j = 10; i != j; i++, j--)
    {
        printf("%d\n", i);
        printf("%d\n", j);
    }
}

void loop_two()
{
    int i, j;
    for (i = 0, j = 8; i < 8; i++, j++)
    {
        printf("% d + % d = % d\n", i, j, i + j);
    }
}

void loop_three()
{
    int i, j;
    for (i = 0, j = 9; i < 10; i++, j--)
    {
        printf("%d%d\n", i, j);
    }
}

int main(void)
{
    loop_three();
    return 0;
}