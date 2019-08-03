#include <stdio.h>

#define MAX 100

int main(void)
{
    int i = 0, j = 0, length;
    char c, t, sentence[MAX];

    printf("Enter a sentence: ");
    for (i = 0; i < MAX && (c = getchar()) != '\n'; i++) {
        if (c == '.' || c == '?' || c == '!') {
            t = c;
            break;
        } else {
            sentence[i] = c;
        }
    }
    length = i--;

    printf("Reversal of sentence: ");
    for (; i >= 0; i--) {
        if (sentence[i] == ' ' || i == 0) {
            for (j = (i == 0 ? 0 : i + 1); j < length && sentence[j] != ' '; j++) {
                printf("%c", sentence[j]);
            }
            if (i > 0) printf(" ");
        }
    }
    printf("%c\n", t);

    return 0;
}
