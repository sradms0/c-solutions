#include <stdio.h>

int main(void)
{
    char first_initial, last_name;

    printf("Enter a first and last name: ");
    while((first_initial = getchar()) == ' ');
    while(getchar() != ' ');
    while((last_name = getchar()) != '\n') putchar(last_name);
    printf(", %c.\n", first_initial);

    return 0;
}
