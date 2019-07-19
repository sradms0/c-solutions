#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1.0f, avg;

    printf("Enter a positive number: ");
    scanf("%lf", &x);
    
    avg = (y + (x / y)) / 2;
    while (fabs(avg - y ) > (.00001 * y)) {
        y = avg;
        avg = (y + (x / y)) / 2;
    }
    printf("Square root: %.5lf\n", y);

    return 0;
}
