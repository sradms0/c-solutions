### Exercise 9.04
Write a function `day_of year(month, day, year)` that returns the day of the year (an integer between 1 and 366) specified by the three arguments.

### Solution
```c
int day_of_year(int month, int day, int year) {
  int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
  int day_total = 0, i = 0;

  while (month != (i+1)) day_total += month_days[i++];
  day_total += day;

  return day_total;
}
```
