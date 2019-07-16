#include <stdio.h>

int main(void)
{
    printf("sizeof(int):         %ld bytes\n", sizeof(int));
    printf("sizeof(short):       %ld bytes\n", sizeof(short));
    printf("sizeof(long):        %ld bytes\n", sizeof(long));
    printf("sizeof(float):       %ld bytes\n", sizeof(float));
    printf("sizeof(double):      %ld bytes\n", sizeof(double));
    printf("sizeof(long double): %ld bytes\n", sizeof(long double));

    return 0;
}
