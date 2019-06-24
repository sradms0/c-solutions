#include <stdio.h>

int main(void)
{
    int n, c;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 9) c = 1;
    else if (n < 100) c = 2;
    else c = 3;

    printf("The number %d has %d digits.\n", n, c);

    return 0;
}
