#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter size of magic square: ");
    scanf("%d", &n);
    char magic_square[n][n];

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    printf("\n");

    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    int i, j, row, col, nrow, ncol;
    // initalize magic square with 0's
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) magic_square[i][j] = 0;
    }

    row = nrow = 0;
    col = ncol = n / 2;
    for (i = 1; i <= n*n; i++) {
        magic_square[row][col] = i;

        // set next row 'up'; wrap if out of bounds
        if ((nrow - 1) == -1) nrow = n - 1;
        else nrow--;

        // set next col 'over'; wrap if out of bounds
        if ((ncol + 1) == n) ncol = 0;
        else ncol++;

        // check if spot has been filled
        if (magic_square[nrow][ncol] > 0) {
            nrow = row + 1;
            ncol = col;
        }

        row = nrow;
        col = ncol;
    }

}

void print_magic_square(int n, char magic_square[n][n])
{
    int i;
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%2d  ", magic_square[i][j]);
        printf("\n");
    }
}

