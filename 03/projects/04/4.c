#include <stdio.h>

int main(void)
{
    int area = 0, prefix = 0, line = 0;

    printf("Enter a phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &area, &prefix, &line);

    printf("You entered %d.%d.%d\n", area, prefix, line);

    return 0;
}
