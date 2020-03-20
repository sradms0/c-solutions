#include <stdio.h>

#define MSG_LEN 100

int main(void)
{
    char msg[MSG_LEN], *p;

    p = &msg[0];
    printf("Enter a msg: ");
    while (p < &msg[MSG_LEN] && (*p = getchar()) != '\n') p++;

    p--;
    printf("Reversal is: ");
    while(p >= &msg[0]) putchar(*p--);

    printf("\n");

    return 0;
}
