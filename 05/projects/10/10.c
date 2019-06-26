#include <stdio.h>

int main(void)
{
    int grade; 

    printf("Enter numberical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("ERROR\n");
    } else {
        printf("Letter grade: ");
        switch (grade / 10) {
            case 0: case 1: case 2: case 3: case 4: case 5: printf("F"); break;
            case 6: printf("D"); break;
            case 7: printf("C"); break;
            case 8: printf("B"); break;
            case 9: case 10: printf("A"); break;
            default: 
                break;
        }
        printf("\n");
    }
    return 0;
}
