#include <stdio.h>
#include <ctype.h>      /*isalpha, tolower*/

#define MSG_LEN 100

int main(void)
{
    char msg[MSG_LEN], c;
    char *p, *q;

    p = msg;
    printf("Enter a message: ");
    while (p < msg+MSG_LEN && (c = getchar()) != '\n') {
        if (isalpha(c)) *p++ = tolower(c);
    } 

    for (p--, q = msg; *p == *q && p != q; p--, q++);
    if (p <= q) printf("Palindrome\n");
    else printf("Not a palindrome\n");

    return 0;
}
