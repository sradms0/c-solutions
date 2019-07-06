#include <stdio.h>

int main(void)
{
    int i, j, n;
    float e;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1, j = 1, e = 1.0f; i <= n; i++) {
        e += 1.0f / (j *= i);
    }

    printf("e ≈ %f\n", e);

    return 0;
}
