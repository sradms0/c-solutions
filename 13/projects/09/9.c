#include <stdio.h>
#include <ctype.h>

#define LENGTH 100

int compute_vowel_count(const char *sentence);

int main(void)
{
    char sentence[LENGTH+1];
    char ch, *p = sentence;

    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n' && p < sentence+LENGTH)
        *p++ = ch;
    *p = '\0';

    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int vowels = 0;

    while(tolower(*sentence)) {
        switch(*sentence++) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vowels++;
            default:
                break;
        }
    }

    return vowels;
}
