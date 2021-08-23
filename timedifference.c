#include<stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    /* Creating structure variables */
    struct time start, stop, diff;

    /* Reading first time period */
    printf("Enter hours, minutes and seconds of start time: ");
    scanf("%d%d%d", &start.hours,&start.minutes, &start.seconds);

    /* Reading second time period */
    printf("Enter hours, minutes and seconds of stop time: ");
    scanf("%d%d%d", &stop.hours,&stop.minutes, &stop.seconds);

    if(start.seconds > stop.seconds)
    {
        stop.seconds += 60;
        --stop.minutes;
    }

    if(start.minutes > stop.minutes)
    {
        stop.minutes += 60;
        --stop.hours;
    }

    diff.seconds = stop.seconds - start.seconds;
    diff.minutes = stop.minutes - start.minutes;
    diff.hours = stop.hours - start.hours;

    printf("Difference = %d : %d : %d", diff.hours, diff.minutes, diff.seconds);
    return 0;
}