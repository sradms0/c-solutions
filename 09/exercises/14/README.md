### Exercise 9.14
The following function is supposed to return `true` if any element of the array `a` has the value 0 and `false` if all elements are nonzero. Sadly, it contains an error. Find the error and show how to fix it:
```c
bool has_zero(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    if (a[i] == 0)
      return true;
    else
      return false;
}
```

### Solution
The else clause will always cause the loop to return `false` at the first element of `a` that is not 0. To fix this, a conditional statement could be placed outside of the loop, checking if the iterator, `i`, is equal to`n`.

```c
bool has_zero(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    if (a[i] == 0) return true;
  if (i == n) return false;
}
```
