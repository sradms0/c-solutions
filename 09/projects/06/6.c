#include <stdio.h>

int polynomial(int x);

int main(void)
{
    int x, t;

    printf("Enter an integer: ");
    scanf("%d",  &x);
    t = polynomial(x);
    printf("Result: %d\n", t);

    return 0 ;
}

int polynomial(int x)
{
    return 3*(x*x*x*x*x) + 2*(x*x*x*x) - 
           5*(x*x*x) - x*x + 7*x - 6;
}
