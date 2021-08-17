#include <stdio.h>
#include <ctype.h>

#define LENGTH 9

int compute_scrabble_value(const char *word);

int main(void)
{
    char word[LENGTH+1]; 

    scanf("%s", word);
    printf("%d\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    int vals[] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    }, sum = 0;

    while(*word)
        sum += vals[toupper(*word++)-'A'];

    return sum;
}
