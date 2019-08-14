#include <stdio.h>

int power (int x, int n);

int main(void)
{
    int x, n;

    printf("Enter a base and exponent: ");
    scanf("%d %d", &x, &n);

    printf("%d\n", power(x, n));

    return 0;
}

int power (int x, int n)
{
    if (n == 0) return 1;
    else  if (n % 2 == 0) return x * power(x, n/2);
    else return x * power(x, n-1);
}
