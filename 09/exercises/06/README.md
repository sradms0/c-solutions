### Exercise 9.06
Write a function `digit(n, i)` that returns the `k`<sup>th</sup> digit (from the right) in `n` (a positive integer). For example, `digit(829, 1)` returns 9, `digit(829, 2)` returns 2, and `digit(829, 3)` returns 8. If `k` is greater than the number of digits in `n`, have the function return 0.

### Solution
```c
int digit(int n, int k)
{
  int i;
  for (i = 1; i < k; i++) n /= 10;
  return n % 10;
}
```
