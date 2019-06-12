#include <stdio.h>

int main(void)
{
    float x = 0.0f;

    printf("Enter a value for x: ");
    if (scanf("%f", &x) > 0) {
        printf("%.2f\n", 3.0f*(x*x*x*x*x) + 2.0f*(x*x*x*x) - 5.0f*(x*x*x) - x*x + 7.0f*x - 6);
    } else {
        printf("Invalid input.Please enter a number");
    }

    return 0;
}
