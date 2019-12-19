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

void add(void);
void subtract(void);
void multiply(void);
void divide(void);

bool assert(char ch);
void calculate(char ch);

int main(void) {
    char ch, next_ch, prev_ch;
    printf("Enter an RPN expression: ");
    while (1) {
        scanf(" %c", &ch);

        if (isdigit(ch)) push(ch-'0');
        else {
            if (ch != '=') {
                calculate(ch);
                /* if next char is operator, then calculate remaining before next operation*/
                scanf(" %c", &next_ch);
                ungetc(next_ch, stdin);
                while (top > 1 && assert(next_ch)) calculate(ch);
            } else if (ch == '=') {
                /* operands remain & after last operator*/
                while (top > 1) calculate(prev_ch);
                printf("Value of RPN expression: %d\n", pop());
                printf("Enter an RPN expression: ");
            }
        }
        prev_ch = ch;
    }
}

bool assert(char ch) {
    return ch != '+' && ch != '-' && ch != '*' && ch != '/';
}

void calculate(char ch) {
    switch (ch) {
        case '+': add (); break;
        case '-': subtract(); break;
        case '*': multiply(); break;
        case '/': divide(); break;
        case '=': break;
        default: 
          exit(1);
          break;
    }
}

void add() {
    push( pop()+pop() );
}

void subtract() {
    int op1 = pop(), op2 = pop();
    push( op2-op1 );
}

void multiply() {
    push( pop()*pop() );
}

void divide() {
    int op1 = pop(), op2 = pop();
    push( op2/op1 );
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

