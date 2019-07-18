#include <stdio.h>

int main(void)
{
    int words = 0, letters = 0;
    char c;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        if (c == ' ') words++;
        else letters++;
    } words++;

    printf("Average word length: %.1f\n", 
            (float)(letters) / words);

    return 0;
}
