### Exercise 8.11
Write a program fragment that declares an 8 x 8 char array named `checker_board` and then uses a loop to store the following data into the array (one character per array element):
```
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B E R B R R
R B R B R B R B
B R B R B R B R
R B R B R B R B
```

*Hint:* The element in row `i`, column `j`, should be the letter B if `i + j` is an even number.

### Solution
```c
int i, l = 8;
char c, checker_board[l][l];

for (i = 0; i < l; i++) {
  for (j = 0; j < l; j++) {
    if ( (i + j) % == 0 ) c = 'B';
    else c = 'R';
    checker_board[i][j] = c;
  }
}
```
