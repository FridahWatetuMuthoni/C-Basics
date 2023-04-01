// Online C compiler to run C program online
#include <stdio.h>

/**
 * Step One: Check if the integer is negative and print the sign if it is negative
 * Step Two: 
 */

void printing_integers(int num){
    //checking if a number is negative 
    //and then printing a negative if it is
    if (num < 0){
        putchar('-');
        num = -num;
    }
    
    //Recursion of removing the last digit
    if(num / 10){
        printing_integers(num / 10);
    }
    
    //printing last digit;
    putchar('0' + num % 10);
}

int main() {
    //printing an integer
    int num1 = 1;
    int num2 = -20;
    int num3 = 1084;
    printing_integers(num1);
    printf("\n");
    printing_integers(num2);
    printf("\n");
    printing_integers(num3);
    printf("\n");
    return 0;
}