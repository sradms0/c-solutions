#include <stdio.h>

int main(void)
{
    double n, sum = 0.0f;

    printf("This program sums a series of decimals\n");
    printf("Enter decimals (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %lf\n", sum);

    return 0;
}
