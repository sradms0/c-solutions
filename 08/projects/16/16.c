#include <stdio.h>
#include <ctype.h> // isalpha, tolower

#define LENGTH 26

int main(void)
{
    int i,
        first_word_count[LENGTH] = {[0] = 0},
        second_word_count[LENGTH] = {[0] = 0};
    char c;

    printf("Enter first word: ");
    while ((c = tolower( getchar() )) != '\n') {
        if (isalpha(c)) {
            first_word_count[c - 'a']++;
        }
    }
    c = '\0';

    printf("Enter second word: ");
    while ((c = tolower( getchar() )) != '\n') {
        if (isalpha(c)) {
            second_word_count[c - 'a']++;
        }
    }

    // check if anagrams
    for (i = 0; i < LENGTH; i++) {
        if (first_word_count[i] != second_word_count[i]) {
            break;
        }
    } 

    if (i == LENGTH) {
        printf("The words are anagrams.");
    } else {
        printf("The words are not anagrams.");
    }
    printf("\n");

    return 0;
}
