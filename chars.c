#include <stdio.h>

int main()
{
    char string;
    
    string = 'C';
    
    if (string == 'H')
    {
        printf("Today is going to be a hot day, bring some water");
    }
    else if (string == 'C')
    {
        printf("Today is going to be cold, carry more sweaters");
    }
    else
    {
        printf("Today is beautiful, have an amazing day");
    }
    return 0;
}