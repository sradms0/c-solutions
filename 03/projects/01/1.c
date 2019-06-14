#include <stdio.h>

int main(void)
{
    int month = 0, day = 0, year = 0;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%d%d\n", year, month, day);

    return 0;
}
