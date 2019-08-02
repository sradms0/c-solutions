#include <stdio.h>

#define LENGTH sizeof(dep) / sizeof(int)

int main(void)
{
    int i,
        user_hour, 
        user_minute, 
        mins_pass,
        dep_time,
        dep_hour,
        dep_minute,
        dep_period,
        arr_time,
        arr_hour,
        arr_minute,
        arr_period,
        dep[8]  = {480, 583, 679, 767, 840, 945, 1140, 1305},
        arr[8]  = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &user_hour, &user_minute);

    mins_pass = user_hour * 60 + user_minute;

    for (i = 0; i < LENGTH-1; i++) {
        if (mins_pass <= (dep[i] + dep[i+1]) / 2) {
            dep_time = dep[i];
            arr_time = arr[i];
            break;
        }
    }

    dep_minute = dep_time % 60;
    dep_hour = (dep_time - dep_minute) / 60;
    dep_period = dep_hour > 11 ? 'p' : 'a';
    dep_hour = dep_hour > 12 ? dep_hour - 12 : dep_hour;

    printf("Closest departure time is %d:%.2d ", dep_hour, dep_minute);
    printf("%c.m.,",dep_period);

    arr_minute = arr_time % 60;
    arr_hour = (arr_time - arr_minute) / 60;
    arr_period = arr_hour > 11 && arr_hour < 24 ? 'p' : 'a';
    arr_hour = arr_hour > 12 ? arr_hour - 12 : arr_hour;

    printf("arriving at %d:%.2d ", arr_hour, arr_minute);
    printf("%c.m.\n",arr_period);

    return 0;
}
