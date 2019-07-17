#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute, mins_pass;
    int d1 = 480, d2 = 583,
        d3 = 679, d4 = 767,
        d5 = 840, d6 = 945,
        d7 = 1140, d8 = 1305;

    char period;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &period);

    mins_pass = ( (toupper(period) == 'P' ? 12 : 0) + hour ) * 60 + minute;
    printf("Closest departure time is ");

    if (mins_pass <= ( (d1 + d2) / 2 ) ) 
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (mins_pass <= ( (d2 + d3) / 2 ) ) 
       printf("9:43 a.m., arriving at 11:52 a.m\n");
    else if (mins_pass <= ( (d3 + d4) / 2 ) ) 
       printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (mins_pass <= ( (d4 + d5) / 2 ) ) 
       printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (mins_pass <= ( (d5 + d6) / 2 ) ) 
       printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (mins_pass <= ( (d6 + d7) / 2 ) ) 
       printf("3:45 p.m., arriving at 5:55p.m.\n");
    else if (mins_pass <= ( (d7 + d8) / 2)) 
       printf("7.00 p.m., arriving at 9:20 p.m.\n");
    else 
       printf("9:45 p.m., arriving at 11:58 a.m.\n");
    
    return 0;
}
