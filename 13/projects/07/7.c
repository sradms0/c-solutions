#include <stdio.h>

int main(void)
{
    char *second_digit[] = {
        "one", "two", "three", 
        "four", "five", "six", 
        "seven", "eight", "nine"
    }, *both_digits[] = {
        "eleven", "twelve", "thirteen", 
        "fourteen", "fifteen", "sixteen", 
        "seventeen", "eighteen", "nineteen"
    }, *first_digit[] = {
        "ten", "twenty", "thirty", 
        "fourty", "fifty", "sixty", 
        "seventy", "eighty", "ninety"
    };

    int n, n1, n2;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    n1 = n / 10;
    n2 = n % 10;

    if (n < 10 || n > 99) printf("Out of range");
    else {
        printf("You entered the number ");
        if (n1 == 1 && n2 > 0) printf("%s", both_digits[n2-1]);
        else {
            printf("%s", first_digit[n1-1]);
            if (n2 > 0)  printf("-%s", second_digit[n2-1]);
        }
    }
    printf(".\n");
    
    return 0;
}
