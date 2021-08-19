#include <stdio.h>
#include <stdlib.h>     /* exit */
#include <stdbool.h>    /* C99 only */
#include <ctype.h>      /* C99 only */

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int evaluate_RPN_expression(const char *expression);

int main(void) {
    char expression[STACK_SIZE+1], *p, ch;
    bool end = false;

    while (1) {
        p = expression;

        printf("Enter an RPN expression: ");

        ch = ' ';
        while ((ch = getchar()) != '\n' && !(end = ch == 'q') && p < expression + STACK_SIZE)
            ch != ' ' && (*p++ = ch);
        *p = '\0';

        if (end) break;

        printf("Value of RPN expression: %d\n", evaluate_RPN_expression(expression));
    }
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char c)
{
    if (is_full())
        stack_overflow();
    else
        contents [top++] = c;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}

int evaluate_RPN_expression(const char *expression)
{
    const char *p = expression; 
    int op1, op2;

    while (*p != '\0') {
        if (isdigit(*p)) {
            push(*p-'0');
        } else if (*p != '='){
            op2 = pop(), op1 = pop();
            switch(*p) {
                case '+': 
                    push(op1+op2); 
                    break;
                case '-': 
                    push(op1-op2); 
                    break;
                case '*': 
                    push(op1*op2); 
                    break;
                case '/': 
                    push(op1/op2); 
                    break;
                default:
                    break;
            }
        }
        p++;
    }
    return pop();
}
