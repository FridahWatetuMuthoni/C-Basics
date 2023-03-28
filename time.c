// Online C compiler to run C program online
#include <stdio.h>

/*Inside the inner loop, the function uses the printf() function to print the hour and minute in the format "HH:MM", 
where "HH" represents the two-digit hour and "MM" represents the two-digit minute. 
The %02d format specifier is used to ensure that each value is printed with leading zeros if necessary, 
so that the output is always in the correct format.
*/

int main() {
    //printing out the 24 hours in a day with putchar
    //00:00 to 24:00
    //one hour == 60 minutes
    int hour, minute;
    
    for (hour = 0; hour < 24; hour++){
        for (minute = 0; minute < 60; minute++){
                //printf("%02d:%02d\n",hour,minute);
                putchar('0' + hour / 10);
                putchar('0' + hour % 10);
                putchar(':');
                putchar('0' + minute / 10);
                putchar('0' + minute % 10);
                putchar('\n');
        }
    }
    printf("done");

    return 0;
}