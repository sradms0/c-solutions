#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

void prompt(char str[], int n);
void read_line(char str[], int n);

int main(void)
{
    char current_word[WORD_LEN+1],
         smallest_word[WORD_LEN+1],
         largest_word[WORD_LEN+1];

    prompt(current_word, WORD_LEN);
    strcpy(smallest_word, current_word);
    strcpy(largest_word, current_word);

    while (strlen(current_word) != 4) {
        prompt(current_word, WORD_LEN);

        if (strcmp(current_word, smallest_word) < 0)
            strcpy(smallest_word, current_word);
        else if (strcmp(current_word, largest_word) > 0) 
            strcpy(largest_word, current_word);
    }
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}

void prompt(char str[], int n)
{
    printf("Enter word: ");
    read_line(str, n);
}

void read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
}
