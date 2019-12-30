### Exercise 11.08
Write the following function:
```c
int *find_largest (int a[], int n);
```
When passed an array `a` of length `n`, the function will return a pointer to the arrays largest element.

### Solution
```c
int *find_largest (int a[], int n)
{
  int i, *m;

  m = &a[0];
  for (i = 0; i < n; i++) {
    if (a[i] > *m) m = &a[i];
  }

  return m;
}
```
