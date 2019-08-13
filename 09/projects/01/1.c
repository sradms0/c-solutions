#include <stdio.h>

#define N 8

void selection_sort(int n, int ints[n]) 

int main(void)
{
    int i = 0, ints[N];

    printf("Enter %d integers: ", N);
    while(i < N) scanf("%d", &ints[i++]);

    selection_sort(N, ints);
    printf("Sorted: ");
    print_ints(N, ints);

    return 0;
}

void selection_sort(int n, int ints[n]) 
{
    int i, temp, max = 0;

    for (i = 1; i < n; i++) {
        if (ints[i] > ints[max]) max = i;
    }
    temp = ints[n-1];
    ints[n-1] = ints[max];
    ints[max] = temp;

    if (n > 1) selection_sort(n-1, ints);
}

void print_ints(int n, int ints[n]) {
    int i;
    for (i = 0; i < N; i++) printf("%d ", ints[i]);
    printf("\n");
}
