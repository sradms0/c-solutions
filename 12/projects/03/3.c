#include <stdio.h>

#define MSG_LEN 100

int main(void)
{
    char msg[MSG_LEN], *p;

    p = msg;
    printf("Enter a message: ");
    while (p < msg+MSG_LEN && (*p = getchar()) != '\n') p++;

    p--;
    printf("Reversal is: ");
    while(p >= msg) putchar(*p--);

    printf("\n");

    return 0;
}
