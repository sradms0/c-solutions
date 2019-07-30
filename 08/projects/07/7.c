#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(void)
{
    int row, col, 
        row_total, col_total, 
        ints[ROWS][COLS];

    for (row = 0; row < ROWS; row++) {
        printf("Enter row %d: ", row + 1);
        for (col = 0; col < COLS; col++) {
            scanf("%d", &ints[row][col]);
        }
    }

    printf("Row totals: ");
    for (row = 0; row < ROWS; row++) {
        row_total = 0;
        for (col = 0; col < COLS; col++) {
            row_total += ints[row][col];
        }
        printf("%d ", row_total);
    }
    printf("\n");

    printf("Column totals: ");
    for (col = 0; col < COLS; col++) {
        col_total = 0;
        for (row = 0; row < ROWS; row++) {
            col_total += ints[row][col];
        }
        printf("%d ", col_total);
    }
    printf("\n");

    return 0;
}
