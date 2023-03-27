#include <stdio.h>

/*
The format specifier %.s is used in printf() to print a substring of a string.
Here, the dot (.) specifies that the precision of the substring will be specified, 
and the asterisk () indicates that the precision will be given as an argument.
The precision specifies the maximum number of characters to be printed from the string. 
So, when %.*s is used, it expects two arguments: 
the first argument specifies the precision and the second argument is the string to be printed.
For example, consider the following code snippet:
*/

int main(void){
    char str[] = "Hello World";
    int size = 5;
    printf("%.*s", size, str);
}