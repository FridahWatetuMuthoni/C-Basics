#include <stdio.h>

void check_number_is_even()
{
    int number = 6;
    if ((number % 2) == 0)
    {
        printf("The number %d is even \n", number);
    }
    else
    {
        printf("The number %d is not even \n", number);
    }
}

int main()
{
    // NUMBERS
    //  int stores single numbers with no decimal points
    int num = 10; // integer
    // float and double stores real numbers.numbers with decimal points
    /*The difference between floats and double is that double can store numbers with a higher level of precision
    therefore it can store real numbers with more accuracy
    */
    float flt_num = 5.2;  // floating point number
    double db_num = 10.0; // double data type

    // CHARATERS
    char c = 'd';

    // STRINGS
    char greeting[] = "Hello world";

    // modulus => returns the remainder of division

    int division_1 = 4 % 2; // returns 0
    int division_2 = 3 % 2; // returns 1

    // check if number is even or not
    check_number_is_even();

    return 0;
}