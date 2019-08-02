#include <stdio.h>

#define N 15

int main(void)
{
    int i = 0;
    char numeric, alpha[N];

    printf("Enter phone number: ");

    while (i < N && (alpha[i++] = getchar()) != '\n');
    printf("In numeric form: ");
    for (i = 0; i < N; i++) {
        switch (alpha[i]) {
            case 'A': case 'B': case 'C':
                  numeric = 2;
                  break;
            case 'D': case 'E': case 'F':
                  numeric = 3;
                  break;
            case 'G': case 'H': case 'I':
                  numeric = 4;
                  break;
            case 'J': case 'K': case 'L':
                  numeric = 5;
                  break;
            case 'M': case 'N': case 'O':
                  numeric = 6;
                  break;
            case 'P': case 'R': case 'S':
                  numeric = 7;
                  break;
            case 'T': case 'U': case 'V':
                  numeric = 8;
                  break;
            case 'W': case 'X': case 'Y':
                  numeric = 9;
                  break;
             default: 
                  numeric = 0;
                  break;
        }

        // print based on translation
        if (numeric) printf("%d", numeric); 
        else printf("%c", alpha[i]);
    }
    return 0;
}
