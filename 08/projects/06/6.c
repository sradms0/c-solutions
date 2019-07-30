#include <stdio.h>
#include <ctype.h>

#define LENGTH 100

int main(void)
{
    int i = 0;
    char c, chars[LENGTH];

    printf("Enter message: ");
    while (i < LENGTH && (chars[i++] = toupper(getchar())) != '\n');

    printf("In B1FF-speak: ");
    for (i = 0; i < LENGTH && chars[i] != '\n'; i++) {
        switch (chars[i]) {
            case 'A': c = '4'; break;
            case 'B': c = '8'; break;
            case 'E': c = '3'; break;
            case 'I': c = '1'; break;
            case 'O': c = '0'; break;
            case 'S': c = '5'; break;
            default: 
              c = chars[i]; 
              break;
        }
        printf("%c", c);
    }
    printf("!!!!!!!!!\n");

    return 0;
}
