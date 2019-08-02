#include <stdio.h>

#define N 20

int main(void)
{
    int i = 0;
    char first_initial, last_name[20];

    printf("Enter a first and last name: ");
    while((first_initial = getchar()) == ' ');
    while(getchar() != ' ');
    while(i < N && (last_name[i++] = getchar()) != '\n');

    for (i = 0; last_name[i] != '\n'; i++) printf("%c", last_name[i]);
    printf(", %c", first_initial);
    printf("\n");
        
    return 0;
}
