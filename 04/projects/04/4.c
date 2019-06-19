#include <stdio.h>

int main(void)
{
    int n, o1, o2, o3, o4, o5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);
    o5 = n % 8;
    n /= 8;
    o4 = n % 8;
    n /= 8;
    o3 = n % 8;
    n /= 8;
    o2 = n % 8;
    n /= 8;
    o1 = n % 8;
    n /= 8;

    printf("In octal, your number is: %d%d%d%d%d\n", o1, o2, o3, o4, o5);

    return 0;
}

