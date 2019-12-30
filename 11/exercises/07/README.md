### Exercise 11.07
Write the following function:
```c
void split_date(int day_of_year, int year, int *month, int *day);
```
`day_of_year` is an integer between 1 and 366, specifying a particular day within the year designated by `year`. `month` and `day` point to variables in which the function will store the equivalent month (1-12) and day within that month (1-31).

### Solution
```c
void split_date(int day_of_year, int year, int *month, int *day)
{
    int curr_total_days, acc_days,
    month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ( ( !(year % 4) && (year % 100) ) || !(year % 400) ) 
        month_days[1] = 29;

    acc_days = 0;
    for (*month = 1; *month <= 12; (*month)++) {
        curr_total_days = month_days[*month-1];
        
        for (*day = 1; *day <= curr_total_days; (*day)++) {
            acc_days++;
            if (acc_days == day_of_year) return;
        }
    }
}
```
