#include <stdio.h>

int main(void)
{
    float radius = 0.0f;
    printf("Enter a volume of a spehere: ");
    // check for a valid number was entered
    if (scanf("%f", &radius) > 0) {
        printf("The volume of a sphere with a %.2f-meter radius: ", radius);
        printf("%.2f\n", (4.0f / 3.0f) * 3.14f * (radius * radius * radius));
    } else {
        printf("Invalid input. Please enter a number.\n");
    }

    return 0;
}
