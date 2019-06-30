### Exercise 6.14
 Find the error in the following program fragment and fix it.
```c
if (n % 2 == 0);
  printf("n is even);
```

### Solution
The error is the semi-colon after the `if` statement. This will cause the `print` statement to run every time.
```c
if (n % 2 == 0)
  printf("n is even);
```
