### Exercise 9.17
Rewrite the `fact` function so that it's no longer recursive.

### Solution
```c
int fact(int n)
{
  int i;
  for (i = n; i > 1; n *= (i-1), i--);
}
```
