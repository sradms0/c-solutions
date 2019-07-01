#include <stdio.h>

int main(void)
{
    float current;
    float largest = 0.0f;

    do {
        printf("Enter a number: ");
        scanf("%f", &current);

        if (current > largest) 
            largest = current;
    } while (current > 0);


    printf("The largest number entered was ");
    if (largest - (int)(largest / 1) > 0)
        printf("%f\n", largest);
    else 
        printf("%.0f\n", largest);

    return 0;
}
