#include <stdio.h>

int main()
{
    // IF STATEMENTS
    int grade = 40;
    if (grade >= 90)
        printf("A\n");
    else if (grade >= 50)
        printf("B\n");
    else
        printf("Other\n");

    int height = 155;
    int weight = 49;

    if (height > 150 && weight > 50)
        printf("You are good to ride\n");
    else
        printf("You cant ride\n");

    // SWITCH STATEMENTS
    char day = 'M';

    switch (day)
    {
    case 'M':
        printf("Today is Monday\n ");
        break;
    case 'T':
        printf("Today is Teusday\n ");
        break;
    case 'W':
        printf("Today is wednesday \n");
        break;
    case 'H':
        printf("Today is Thurdday \n");
        break;
    }
}