#include <stdio.h>
#include <ctype.h>  /* isdigit */

#define MAX_DIGITS 10

/* external variables */

/*   0 1 2 3 4 5 6
 *   _ | | _ | | _
 *
 *        _0_
 *      5|_6_|1
 *      4|_3_|2
 */
       
const int segments[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1}
},
/*   {     0    1    2 
 *      0{' ', '_', ' '}, ...
 *      1{'|', '_', '|'}, ...
 *      2{'|', '_', '|'}, ...
 *      3{' ', ' ', ' '}, ...
 *   }
 */
segment_digit_map[7][2] = {
   {0,1}, {1,2}, {2,2}, {2,1}, {2,0}, {1,0}, {1,1}
};

char digits[4][MAX_DIGITS*4];

/* prototypes */
void clear_digits_array (void);
void process_digit (int digit, int position);
void print_digits_array (void) ;

int main(void)
{
    char c;
    int position = -4, digit_count = 0;

    clear_digits_array();

    printf("Enter a number: ");
    while ((c = getchar()) != '\n') {
        if (isdigit(c) && digit_count < 10)  {
            process_digit(c-'0', position+=4);
            digit_count++;
        }
    } 
    print_digits_array();
    
    return 0;
}

void clear_digits_array(void) 
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS*4; j++) digits[i][j] = ' ';
    }
}

void process_digit (int digit, int position)
{
    int seg_row = digit,
        seg_col,
        dig_row,
        dig_col;
    char segment;

    for (seg_col = 0; seg_col < 7; seg_col++) {
        if (segments[seg_row][seg_col]) {
            dig_row = segment_digit_map[seg_col][0];
            dig_col = segment_digit_map[seg_col][1]+position;

            if (!(seg_col % 3)) segment = '_';
            else segment = '|';
            digits[dig_row][dig_col] = segment;
        }
    }
}

void print_digits_array() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS*4; j++) {
            if (digits[i][j]) printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}
