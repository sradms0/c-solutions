#include <stdio.h>

int main(void)
{
    double num, res;
    char c;

    printf("Enter an expression: ");
    scanf("%lf", &res);

    while((c = getchar()) != '\n') {
        switch (c) {
            case '+': 
                scanf("%lf", &num);
                res += num;
                break;
            case '-': 
                scanf("%lf", &num);
                res -= num;
                break;
            case '*': 
                scanf("%lf", &num);
                res *= num;
                break;
            case '/': 
                scanf("%lf", &num);
                res /= num;
                break;
            default: 
                break;
        }
    } 
    printf("Value of expression: %.1lf\n", res);

    return 0;
}
