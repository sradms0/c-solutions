### Exercise 12.11
Modify the `find_largest` function so that it uses pointer arithmetic—not subscripting—to visit array elements.

### Solution
```c
int *find_largest (int a[], int n)
{
  int i, *m;

  m = a;
  for (i = 0; i < n; i++) {
    if (*a+i > *m) m = a+i;
  }

  return m;
}
```

