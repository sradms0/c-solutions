#include <stdio.h>

#define SENTENCE_LENGTH 30
#define CHAR_LENGTH 20

int main(void)
{
    int i,
        j,
        word_ended = 0,
        sentence_ended = 0;

    char sentence[SENTENCE_LENGTH][CHAR_LENGTH+1], 
         c, punc = ' ';

    printf("Enter a sentence: ");
    for (i = 0; i < SENTENCE_LENGTH && !sentence_ended; i++) {
        for (j = 0; j < CHAR_LENGTH && (c = getchar()) != '\n'; j++) {
            word_ended = c == ' ';
            sentence_ended = c == '.' || c == '?' || c == '!';
            punc = sentence_ended ? c : ' ';

            if (word_ended || sentence_ended)
                break;

            sentence[i][j] = c;
        }
        sentence[i][j] = '\0';
    }

    printf("Reversal of sentence: ");
    for (i--; i >= 0; i--) {
        printf("%s", &sentence[i][0]);
        if (i > 0) printf(" ");
    }
    printf("%c\n", punc);

    return 0;
}
