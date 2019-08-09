### Exercise 9.11
Write the following function:
```c
float compute_GPA(char grades[], int n);
```
The `grades` array will contain letter grades (A, B, C, D, or F, either upper-case or lower-case); `n` is the length of the array. The function should return the average of the grades (assume that A=4, B=3, C=2, D=1, and F=0)

### Solution
```c
#include <ctype.h>

float compute_GPA(char grades[], int n)
{
  int i;
  float t = 0.0f;

  for (i = 0; i < n; i++) {
    switch(tolower(grades[i])) {
      case 'a': t += 4.0f; break;
      case 'b': t += 3.0f; break;
      case 'c': t += 2.0f; break;
      case 'd': t += 1.0f; break;
      case 'f':
      default: break;
    }
  }
  return t / n;
}

```
