### Exercise 12.18
Write the `evaluate_position` function described in Exercise 13 of Chapter 9. Use pointer arithmetic—not subscripting—to visit array elements. Use a single loop instead of nested loops.

### Solution
```c
#include <ctype.h>;

int evaluate_position(char board[8][8])
{
  int total = 0,
      white_sum = 0,
      black_sum = 0;
  
  char *c;

  for (c = *board; c < *board+64; c++) {

    switch (tolower(*c)) {
      case 'q': total += 3; break;
      case 'r': total += 5; break;
      case 'b': total += 3; break;
      case 'n': total += 3; break;
      case 'p': total += 1; break;
      default: break;
    }

    if (*c >= 65 && *c <= 90) black_sum += total;
    else white_sum += total;
    total = 0;
  }

  return white_sum - black_sum;
}
```
