#include <stdio.h>

int main(void)
{
    int x = 1025;
    int *p = &x;
    int **q = &p;
    int ***r = &q;
    printf("%d\n", *p); 
    printf("%p\n", *q); 
    printf("%d\n", *(*q));
    printf("%p\n", *(*r));
    printf("%d\n", *(*(*r)));
    ***r = 10;
    printf("X = %d\n", x);
    **q = *p + 2;
    printf("X = %d\n", x);
    return (0);
}