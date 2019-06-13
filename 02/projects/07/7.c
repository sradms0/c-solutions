#include <stdio.h>

int main(void)
{
    int amount = 0;
    int twenties = 0;
    int tens = 0;
    int fives = 0;
    int ones = 0;

    printf("Enter a dollar amount: ");
    if (scanf("%d", &amount) > 0) {
        twenties = amount / 20;
        amount -= twenties * 20;

        tens = amount / 10;
        amount -= tens * 10;

        fives = amount / 5;
        amount -= fives * 5;

        ones = amount / 1;

        printf("$20 bills: %d\n", twenties);
        printf("$10 bills: %d\n", tens);
        printf(" $5 bills: %d\n", fives);
        printf(" $1 bills: %d\n", ones);

    } else {
        printf("Invalid input. Please enter number\n");
    }

    return 0; 
}
