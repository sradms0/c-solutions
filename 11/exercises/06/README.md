### Exercise 11.06
Write the following function:
```c
void find_two_largest(int a[], int n, int *largest, int *second_largest);
```
When passed an array `a` of length `n`, the function will search `a` for its largest and second largest elements, storing them in the variables pointed to by `largest` and `second_largest`, respectively.

### Solution

```c
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
  int i;

  *largest = *second_largest = a[0];

  for (i = 1; i < n; i++) {
    if (a[i] > *largest) {
        *second_largest = *largest;
        *largest = a[i];
    } else if (*largest == *second_largest) {
        *second_largest = a[i];
    }
  }
}
```
