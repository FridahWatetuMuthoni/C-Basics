#include <stdio.h>
#include <stdlib.h>

char *display();
const char *display_two();
char *string_creation();

int main(void)
{
    char *string = display();
    printf("%s\n", string);
    string[0] = 'Z';
    printf("%s\n", string);

    // using pointers
    // to make sure that you know that is can not be modified
    // add const to avoid modifying it by mistake
    const char *str = display_two();
    printf("%s\n", str);

    /*
    This will give an error because we can not modify str
    str[0] = 'H';
    printf("%s\n", str);
    */

    return (0);
}

char *display()
{
    // static memory allocation not stack memory allocation
    static char string[] = "Hello World";
    return (string);
}

const char *display_two()
{
    // str is stored to the read only section of the heap
    const char *str = "My World of C Programming";
    return (str);
}

char *string_creation()
{
    char *string = (char *)malloc(sizeof(char) * 20);
    return (string);
}
