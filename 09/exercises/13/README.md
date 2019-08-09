### Exercise 9.13
Write the following function, which evaluates a chess position:
```c
int evaluate_position(char board[8][8]);
```
`board` represents a configuration of pieces on a chessboard, where the letters K, Q, R, B, N, P represent White pieces, and the letters k, q, r, b, n, and p represent Black pieces. `evaluate_position` should sum the values of the White pieces (Q = 9, R = 5, B = 3, N=3, P= 1). It should also sum the values of the Black pieces (done in a similar way). The function will return the difference between the two numbers. This value will be positive if White has an advantage in material and negative if Black has an advantage.

### Solution
```c
#include <ctype.h>;

int evaluate_position(char board[8][8])
{
  int row, 
      col, 
      total = 0;
      white_sum = 0;
      black_sum = 0;
  
  char c;

      for (row = 0; row < 8; row++) {
        for (col = 0; col < 8; col++) {
          c = board[row][col];

          switch (tolower(c)) {
            case 'q': total += 3; break;
            case 'r': total += 5; break;
            case 'b': total += 3; break;
            case 'n': total += 3; break;
            case 'p': total += 1; break;
            default: break;
          }

          if (c >= 65 && c <= 90) black_sum += total;
          else white_sum += total;
          total = 0;
      }

      return white_sum - black_sum;
}
```

