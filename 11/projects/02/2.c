#include <stdio.h>

int d1 = 480,   a1  = 616,
    d2 = 583,   a2  = 712,
    d3 = 679,   a3  = 811,
    d4 = 767,   a4  = 900,
    d5 = 840,   a5  = 968,
    d6 = 945,   a6  = 1075,
    d7 = 1140,  a7  = 1280,
    d8 = 1305,  a8  = 1438;

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

void display_time(int time);

void display_schedule(int departure_time, int arrival_time);

int main(void)
{
    int hour, minute, 
        desired_time,
        departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    desired_time = hour * 60 + minute;
    find_closest_flight(desired_time, &departure_time, &arrival_time);

    display_schedule( departure_time,  arrival_time);

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
   if (desired_time <= ( (d1 + d2) / 2 ) ) 
        *departure_time = d1, *arrival_time = a1;
    else if (desired_time <= ( (d2 + d3) / 2 ) ) 
       *departure_time = d2, *arrival_time = a2;
    else if (desired_time <= ( (d3 + d4) / 2 ) ) 
       *departure_time = d3, *arrival_time = a3;
    else if (desired_time <= ( (d4 + d5) / 2 ) ) 
       *departure_time = d4, *arrival_time = a4;
    else if (desired_time <= ( (d5 + d6) / 2 ) ) 
        *departure_time = d5, *arrival_time = a5;
    else if (desired_time <= ( (d6 + d7) / 2 ) ) 
        *departure_time = d6, *arrival_time = a6;
    else if (desired_time <= ( (d7 + d8) / 2)) 
        *departure_time = d7, *arrival_time = a7;
    else 
        *departure_time = d8, *arrival_time = a8;
}

void display_time(int time)
{
    int hour = time / 60, minute = time % 60;
    char meridian_prefix = hour >= 12 ? 'p' : 'a';

    hour = hour > 12 ? hour - 12 : hour;
    printf("%d:%02d %cm", hour, minute, meridian_prefix);
}

void display_schedule(int departure_time, int arrival_time)
{
    printf("Closest departure time is ");
    display_time(departure_time);
    printf(", ");
    printf("arriving at ");
    display_time(arrival_time);
    printf("\n");
}
