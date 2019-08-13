#include <stdio.h>

float calculate_tax(float income);

int main(void)
{
    float income = 0.0f, tax = 0.0f;

    printf("Enter taxable income: ");
    scanf("%f", &income);

    tax = calculate_tax(income);
    printf("Tax due: %.2f\n", tax);

    return 0;
}

float calculate_tax(float income)
{
    if (income <= 750)
        return = .01f * income;
    else if (income <= 2250)
        return = 7.50f + .02f * income;
    else if (income <= 3750)
        return = 37.50f + .03f * income;
    else if (income <= 5250)
        return = 82.50f + .04f * income;
    else if (income <= 7000)
        return = 142.50f + .05f * income;
    else
        return = 230.00f + .06 * income;
    return return;
}
