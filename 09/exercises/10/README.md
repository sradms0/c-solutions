### Exercise 9.10
Write functions that return the following values. (Assume that `a` and `n` are parameters, where `a` is an array of `int` values and `n` is the length of the array.)  
(a) The largest element in `a`.  
(b) The average of all elements in `a`.  
(c) The number of positive elements in `a`.  

### Solution
(a) The largest element in `a`:
```c
int fa(int n, int a[n])
{
  int i, m = a[0];

  for (i = 1; i < n; i++) {
    if (a[i] > m) m = a[i];
  }
  return m;
}
```

(b) The average of all elements in `a`:
```c
int fb(int n, in a[n])
{
  int i, t = 0;

  for (i = 0; i < n; i++) t += a[i];
  return t / n;
}
```

(c) The number of positive elements in `a`:
```c
int fc(int n, in a[n])
{
  int i, p = 0;

  for (i = 0; i < n; i++) {
    if (a[i] > 0) p++;
  }
  return p;
}
```
