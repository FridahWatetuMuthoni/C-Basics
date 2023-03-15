#include <stdio.h>

int calculate_distance(int *time, int *speed)
{
    int distance = (*time) * (*speed);
    return distance;
}

int main()
{
    int time = 0;
    int speed = 0;

    printf("Time: ");
    scanf("%d", &time);
    printf("Speed: ");
    scanf("%d", &speed);

    int distance = calculate_distance(&time, &speed);
    printf("Distance: %d\n", distance);
    return 0;
}