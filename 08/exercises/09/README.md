### Exercise 8.09
Using the array of Exercise 8, write a program fragment that computes the average temperature for a month (averaged over all days of the month and all hours of the day).

### Solution
```c
int i, j;
float average = 0.0f, total = 0.0f;

for (int i = 0; i < 30; i++) {
  for (j = 0; j < 24; j++) {
    total += temperature_readings[i][j];
  }
}
average = total / (24 * 30);
```
