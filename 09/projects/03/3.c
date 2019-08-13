#include <stdio.h>
#include <stdlib.h> //srand, rand
#include <time.h>

#define N 10

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);

int main(void)
{
    char grid[N][N];

    // seed pseudo numbers
    srand((unsigned) time(NULL));

    generate_random_walk(grid);
    print_array(grid);

    return 0;
}

void generate_random_walk(char walk[N][N])
{
    int can_move = 1,
        spot_taken,
        up,
        down,
        left,
        right,
        dir,
        redo,
        row, col, 
        nrow, ncol;

    char c;
    
    // fill walk with '.'
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) walk[row][col] = '.';
    }

    for (c = 65, row = col = 0; can_move && c <= 90; c++) {
        // fill current location with alpha
        walk[row][col] = c;

        // reset available moves
        up      = 0;
        down    = 1;
        left    = 2;
        right   = 3;

        do {
            // select direction
            nrow = row;
            ncol = col;
            dir = rand() % 4;
            redo = 0;
            // check that dir is in bounds
            if (dir == up) {
                if (row > 0) nrow--;
                up = -1;
            } else if (dir == down) {
                if (row < N-1) nrow++;
                down = -1;
            } else if (dir == left) {
                if (col > 0) ncol--;
                left = -1;
            } else if (dir == right) {
                if (col < N-1) ncol++;
                right = -1;
            } 
            spot_taken = walk[nrow][ncol] != '.';

            // check if surrounding spots are all taken
            if ( (up + down + left + right) == -4 && spot_taken) can_move = 0;
            // redo if dir wasn't in bounds or spot already taken
            if ((row == nrow && col == ncol) || spot_taken) {
                redo = 1;
            // otherwise, set row, col to new locations
            } else {
                row = nrow;
                col = ncol;
                redo = 0;
            }
        } while (can_move && redo);
    }
}

void print_array(char walk[N][N])
{
    int col, row;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) printf("%c ", walk[row][col]);
        printf("\n");
    }
}
