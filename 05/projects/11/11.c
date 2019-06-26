#include <stdio.h>

int main(void)
{
    int n, n1, n2;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    n1 = n / 10;
    n2 = n % 10;

    if (n < 10 || n > 99) {
        printf("Out of range");
    } else {
        printf("You entered the number ");
        if (n1 == 1 && n2 > 0) {
            switch(n2) {
                case 1: printf("eleven"); break;
                case 2: printf("twelve"); break;
                case 3: printf("thirteen"); break;
                case 4: printf("fourteen"); break;
                case 5: printf("fifteen"); break;
                case 6: printf("sixteen"); break;
                case 7: printf("seventeen"); break;
                case 8: printf("eightteen"); break;
                case 9: printf("nineteen"); break;
                default: break;
            }
        } else {
            switch(n1) {
                case 1: printf("ten"); break;
                case 2: printf("twenty-"); break;
                case 3: printf("thirty-"); break;
                case 4: printf("fourty-"); break;
                case 5: printf("fifty-"); break;
                case 6: printf("sixty-"); break;
                case 7: printf("seventy-"); break;
                case 8: printf("eighty-"); break;
                case 9: printf("ninety-"); break;
                default: break;
            }
            switch(n2) {
                case 1: printf("one"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("four"); break;
                case 5: printf("five"); break;
                case 6: printf("six"); break;
                case 7: printf("seven"); break;
                case 8: printf("eight"); break;
                case 9: printf("nine"); break;
                default: break;
            }
        }
    }
    printf(".\n");
    
    return 0;
}
