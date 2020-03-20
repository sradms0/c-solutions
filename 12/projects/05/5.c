#include <stdio.h>

#define MAX 100

int main(void)
{
    char *p, *q, *l, sentence[MAX], c, t;

    printf("Enter a sentence: ");
    for (p = sentence; p < sentence+MAX && (c = getchar()) != '\n'; p++) {
        if (c == '.' || c == '?' || c == '!') {
            t = c;
            break;
        } else {
            *p = c;
        }
    }
    l = p--;

    printf("Reversal of sentence: ");
    for (; p >= sentence; p--) {
        if (*p == ' ' || p == sentence) {
            for (q = (p == sentence ? sentence : p+1); q < l && *q != ' '; q++)
                printf("%c", *q);
            if (p > sentence) printf(" ");
        }
    }
    printf("%c\n", t);

    return 0;
}
