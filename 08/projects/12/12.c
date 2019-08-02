#include <stdio.h>
#include <ctype.h>

#define N 26

int main(void)
{
    int val = 0,
        scrabble[N] = {
            1, 3, 3, 2, 1, 4, 2, 4, 1, 
            8, 5, 1, 3, 1, 1, 3, 10, 
            1, 1, 1, 1, 4, 4, 8, 4, 10
        };

    char ch;

    printf("Enter a word: ");
    while ((ch = toupper( getchar() )) != '\n') 
        val += scrabble[ch - 'A'];
    printf("Scrabble value: %d\n", val);

    return 0;
}
