#include <stdio.h>
#include <stdlib.h>

#define LENGTH 80

int main(void)
{
    int i, n;
    char a_case, c, message[LENGTH];

    printf("Enter message to be encrypted: ");
    for (i = 0; i < LENGTH && (c = getchar()) != '\n'; i++) {
        message[i] = c;
    }
    message[i] = '\0';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    printf("Encrypted message: ");
    for (i = 0; message[i] != '\0'; i++) {

        c = message[i];

        // check if alpha
        if (c >= 65 && c <= 122) {
            // convert based on char case(including wrap-around)
            a_case = c <= 90 ? 'A' : 'a';
            c = ((c - a_case) + n) % 26 + a_case;
        }
        printf("%c", c);
    }
    printf("\n");

    return 0;
}
