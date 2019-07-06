#include <stdio.h>

int main(void)
{
    int i, j;
    float e, eps;

    printf("Enter epsilon: ");
    scanf("%f", &eps);

    for (i = 1, j = 1, e = 1.0f; e > eps; i++) {
        e += 1.0f / (j *= i);
    }

    printf("e ≈ %f\n", e);

    return 0;
}
