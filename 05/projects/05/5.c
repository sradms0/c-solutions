#include <stdio.h>

int main(void)
{
    float income = 0.0f, tax = 0.0f;

    printf("Enter taxable income: ");
    scanf("%f", &income);

    if (income <= 750)
        tax = .01f * income;
    else if (income <= 2250)
        tax = 7.50f + .02f * income;
    else if (income <= 3750)
        tax = 37.50f + .03f * income;
    else if (income <= 5250)
        tax = 82.50f + .04f * income;
    else if (income <= 7000)
        tax = 142.50f + .05f * income;
    else
        tax = 230.00f + .06 * income;

    printf("Tax due: %.2f\n", tax);

    return 0;
}
