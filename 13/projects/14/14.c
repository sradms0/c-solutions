#include <stdio.h>
#include <ctype.h>      
#include <stdbool.h> 

#define LENGTH 26

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char word1[LENGTH+1], word2[LENGTH+1], 
         *p1 = word1, *p2 = word2, c;
         

    printf("Enter first word: ");
    while ((c = tolower( getchar() )) != '\n')
        if (isalpha(c)) *p1++ = c;
    c = *p1 = '\0';

    printf("Enter second word: ");
    while ((c = tolower( getchar() )) != '\n')
        if (isalpha(c)) *p2++ = c;
    *p2 = '\0';

    printf("The words are%sanagrams.\n", 
            are_anagrams(word1, word2) ? " " : " not ");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int letters[LENGTH] = {[0]=0};

    while (*word1 != '\0') {
        letters[tolower(*word1) - 'a'] = 1;
        word1++;
    }

    while (*word2 != '\0') {
        if (!letters[tolower(*word2)- 'a'])
            return false;
        word2++;
    }

    return true;
}
