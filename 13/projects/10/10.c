#include <stdio.h>
#include <string.h>

#define LENGTH 50

void reverse_name(char *name);

int main(void)
{
    char name[LENGTH+1];
    char ch, *p = name;

    printf("Enter a first and last name: ");
    while ((ch = getchar()) != '\n' && p < name+LENGTH)
        *p++ = ch;
    *p = '\0';

    reverse_name(name);
    printf("%s", name);

    return 0;
}

void reverse_name(char *name)
{
    char reversed[LENGTH+1], 
         *prev = reversed, 
         *pname = name;

    while (*pname != '\0') pname++;
    while (*pname != ' ') pname--;
    pname++;

    while (*pname != '\0')
        *prev++ = *pname++;
    *prev++ = ',';
    *prev++ = ' ';

    pname = name;
    while (*pname == ' ') pname++;
    *prev++ = *pname;
    *prev++ = '.';
    *prev = '\0';

    strcpy(name, reversed);
}
