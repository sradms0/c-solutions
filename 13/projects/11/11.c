#include <stdio.h>

#define LENGTH 50

double compute_average_word_length(const char *sentence);

int main(void)
{
    char sentence[LENGTH+1], c, *p = sentence;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n' && p < sentence+LENGTH) *p++ = c;
    *p = '\0';

    printf("Average word length: %.1f\n", compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int words = 0, letters = 0;

    while (*sentence != '\0') {
        if (*sentence == ' ') words++;
        else letters++;
        sentence++;
    } words++;
    
    return (double)(letters) / words;
}
