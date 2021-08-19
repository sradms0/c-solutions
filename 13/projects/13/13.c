#include <stdio.h>

#define LENGTH 80

void encrypt (char *message, int shift);

int main(void)
{
    int i, shift;
    char c, message[LENGTH];

    printf("Enter message to be encrypted: ");
    for (i = 0; i < LENGTH && (c = getchar()) != '\n'; i++)
        message[i] = c;
    message[i] = '\0';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    encrypt(message, shift);
    printf("Encrypted message: %s\n", message);

    return 0;
}

void encrypt (char *message, int shift)
{
    char *p = message, a_case;

    while (*p != '\0') {
        if (*p >= 65 && *p <= 122) {
            /*convert based on char case(including wrap-around)*/
            a_case = *p <= 90 ? 'A' : 'a';
            *p = ((*p - a_case) + shift) % 26 + a_case;
        }
        p++;
    }
}
