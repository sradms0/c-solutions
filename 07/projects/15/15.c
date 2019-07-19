#include <stdio.h>

int main(void)
{
    int n;
    long f = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    f = n;
    for (int i = n; i > 1; i--) f *= i;
    printf("Factorial of %d: %Ld\n", n, f);

    return 0;
}
