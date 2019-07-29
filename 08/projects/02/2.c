#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int count = 0, digit = 0, repeat[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit_seen[digit]) repeat[digit]++;
        else repeat[digit] = 1;
        
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Digits:\t\t");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    } 
    printf("\n");

    printf("Occurrences:\t");
    for (int i = 0; i < 10; i++) {
        printf("%d ", repeat[i]);
    } 
    printf("\n");

    return 0;
}
