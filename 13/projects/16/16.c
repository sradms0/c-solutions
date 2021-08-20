#include <stdio.h>

#define MSG_LEN 100

void reverse(char *message);

int main(void)
{
    char msg[MSG_LEN+1], *p = msg, ch;

    printf("Enter a msg: ");
    while ((ch = getchar()) != '\n' && p < msg+MSG_LEN)
        *p++ = ch; 
    *p = '\0';

    reverse(msg);
    printf("Reversal is: %s\n", msg);

    return 0;
}

void reverse(char *message)
{
    char *p1 = message, 
         *p2 = message,
         t;

    while (*(p2+1) != '\0') p2++;
    
    while (p1 != p2) {
        t = *p1;
        *p1++ = *p2;
        *p2-- = t;
    }
}
