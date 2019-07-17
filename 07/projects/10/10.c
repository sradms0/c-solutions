#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int vowels = 0;
    char c;

    printf("Enter a sentence: ");
    while ((c = tolower( getchar() )) != '\n') {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            default: 
                break;
        }
    }
    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;
}
