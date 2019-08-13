#include <stdio.h>
#include <ctype.h>      // isalpha, tolower
#include <stdbool.h>    // bool

#define N 26

void read_word(int counts[N]);
bool equal_array(int counts1[N], int counts2[N]);

int main(void)
{
    int first_word_count[N] = {[0] = 0},
        second_word_count[N] = {[0] = 0};

    printf("Enter first word: ");
    read_word(first_word_count);

    printf("Enter second word: ");
    read_word(second_word_count);

    if (equal_array(first_word_count, second_word_count)) {
        printf("The words are anagrams.");
    } else {
        printf("The words are not anagrams.");
    }
    printf("\n");

    return 0;
}

void read_word(int counts[N])
{
    char c;
    while ((c = tolower( getchar() )) != '\n') {
        if (isalpha(c)) {
            counts[c - 'a']++;
        }
    }
}

bool equal_array(int counts1[N], int counts2[N])
{
    int i;
    for (i = 0; i < N; i++) {
        if (counts1[i] != counts2[i]) {
            break;
        }
    } 
    return i == N;
}
