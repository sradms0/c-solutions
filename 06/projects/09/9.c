#include <stdio.h>

int main(void)
{
    float loan = 0.0f,
          rate = 0.0f,
          monthly_rate = 0.0f,
          payment = 0.0f;

    int total_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter total payments: ");
    scanf("%d", &total_payments);

    monthly_rate = rate / 100.0f / 12.0f;
    for (int i = 1; i <= total_payments && loan > 0; i++) {
        loan = loan - payment + loan * monthly_rate;
        printf("\nBalance remaining after payment %d: $%.2f\n", i, loan);
    }

    return 0;
}
