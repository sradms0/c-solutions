#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute;
    char period;

    printf("Enter a 12-hour time: ");
    scanf("%d: %d %c", &hour, &minute, &period);

    hour += (toupper(period) == 'P' && hour != 12) ? 12 : 0;
    printf("Equivalent 24-hour time: %d:%d\n", hour, minute);
    
    return 0;
}
