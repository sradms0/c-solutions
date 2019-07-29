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
        if (digit_seen[digit]) {
            repeat[digit] = digit;
            count++;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if (count > 0) {
        printf("Repeated digit(s): ");
        for (int i = 0; i < 10; i++) {
            if (digit_seen[i]) printf("%d ", repeat[i]);
        } 
        printf("\n");
    } else  printf("No repeated digit\n");

    return 0;
}
