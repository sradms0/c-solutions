#include <stdio.h>
#include <stdlib.h>     /* exit */
#include <stdbool.h>    /* C99 only */

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

bool is_right_brace(char c);
bool is_left_brace(char c);
bool is_right_paren(char c);
bool is_left_paren(char c);
bool are_matched_braces(char c1, char c2);
bool are_matched_parens(char c1, char c2);

int main(void)
{
    char c;
    bool matched;

    printf("Enter parentheses and/or braces: ");
    while ((c = getchar()) != '\n') {
        matched = false;
        if (is_left_brace(c) || is_left_paren(c)) {
            push(c);
        } else {
            char popped = pop();
            if (is_right_brace(c)) {
                matched = are_matched_braces(popped, c);
            } else if (is_right_paren(c)) {
                matched = are_matched_parens(popped, c);
            } 
        } 
    }

    printf("Parentheses/braces are ");
    if ( !(matched || is_empty()) ) printf("not ");
    printf("nested properly\n");

    return 0;
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
    printf("Stack Overflow\n");
    exit(EXIT_SUCCESS);
}

void stack_underflow(void)
{
    printf("Stack Underflow\n");
    exit(EXIT_SUCCESS);
}

bool is_right_brace(char c)
{
    return c == '}';
}

bool is_left_brace(char c)
{
    return c == '{';
}

bool is_right_paren(char c)
{
    return c == ')';
}

bool is_left_paren(char c)
{
    return c == '(';
}

bool are_matched_braces(char c1, char c2) 
{
    return is_left_brace(c1) && is_right_brace(c2);
}

bool are_matched_parens(char c1, char c2)
{
    return is_left_paren(c1) && is_right_paren(c2);
}
