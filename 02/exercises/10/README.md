### Exercise 2.10
In the `dweight.c` program (Section 2.4), which spaces are essential? 

### Solution
`dweight.c`:
```c
/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * length * width;
    int weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional wieght (pounds): %d\n", weight);

    return 0;
}
```
The only essential spaces are those between `int` data type keywords and identifiers.

