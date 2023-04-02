#include <stdio.h>
#include <assert.h>

/**
 * define the terminating case or the base case e.g. if(n < 0)
 * define how you are going to shrink or reduce the value i.e countdown(n - 1)
 */

void count_down(int n)
{
    // chaecking if the number is postive
    assert(n >= 0 && "n was not greater than or equal to zero");

    // our base case/ terminating case
    if (n < 0)
    {
        return;
    }
    else
    {
        printf("%d\n", n);
        // how we shrink or reduce our base case
        return count_down(n - 1);
    }
}

int main(void)
{
    int count = -20;
    count_down(count);
    return 0;
}