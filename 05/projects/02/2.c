#include <stdio.h>

int main(void)
{
    int hour_24 = 0, hour_12 = 0, min_a = 0, min_b = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d:%1d%1d", &hour_24, &min_a, &min_b);

    // subtract 12 only when hour is past 12
    printf("Equivalent 12-hour time: ");
    if (hour_24 > 12) hour_12 = hour_24 - 12;
    else hour_12 = hour_24;

    // am or pm output: am before 12 or when 24
    printf("%d:%d%d", hour_12, min_a, min_b);
    if (hour_24 == 24 || hour_24 < 12) printf(" AM\n");
    else printf(" PM\n");

    return 0;
}
