#include <stdio.h>
#include <stdlib.h>

#define DATE_LEN 12 /*includes null and \n for fgets */

char *months[12] = {
    "January", "February", "March", 
    "April", "May", "June", 
    "July", "August", "September", 
    "October", "November", "December"
};

void display_date(const char *date);

int main(void)
{
    char date[DATE_LEN];

    printf("Enter a date (mm/dd/yyyy): ");
    fgets(date, DATE_LEN, stdin);

    display_date(date);

    return 0;
}


void display_date(const char *date)
{
    printf("You entered the date %s ", months[atoi(date)-1]);
    while (*date++ != '/');
    printf("%d, ", atoi(date));
    while (*date++ != '/');
    printf("%s", date);
}
