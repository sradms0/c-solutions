#include <stdbool.h>    /*bool*/
#include <stdio.h>
#include <ctype.h>      /*isalpha, tolower*/

#define MSG_LEN 100

bool is_palindrome (const char *message);

int main(void)
{
    char msg[MSG_LEN], c, *p = msg;

    printf("Enter a message: ");
    while (p < msg+MSG_LEN && (c = getchar()) != '\n') {
        if (isalpha(c)) *p++ = tolower(c);
    } *p = '\0';

    printf("%s\n", is_palindrome(msg) ? "Palindrome": "Not a palindrome");

    return 0;
}

bool is_palindrome (const char *message)
{
    const char *p1 = message, *p2 = message;
    int half_len = 0;

    while (*(p2+1) != '\0') p2++;
    half_len = (p2-p1)/2;

    while (p1 <= message+half_len) {
        if (*p1 != *p2) return false;
        p1++;
        p2--;
    }

    return true;
}
