#include <stdio.h>

int main(void)
{
    float amount = 0.0f;
    float tax = 0.05f;

    printf("Enter an amount: ");
    if (scanf("%f", &amount) > 0)  {
        printf("With tax added: $%.2f\n", (amount * tax) + amount);
    }
    return 0;
}
