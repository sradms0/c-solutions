### Project 5.08
The following table shows the daily flights from one city to another:
Departure time|Arrival time
--------------|------------
8:00a.m.      | 10:16am.
9:43a.m.      | 11:52a.m.
11:19a.m.     | 1:31p.m.
12:47p.m.     | 3:00 pm.
2:00 p.m.     | 4:08p.m.
3:45 p.m.     | 5:55p.m.
7.00 p.m.     | 9:20p.m.
9:45 p.m.     | 11:58p.m.

Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:
```
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
```

*Hint:* Convert the input into a time expressed in minutes since midnight, and compare it to the departure times, also expressed in minutes since midnight. For example, 13:15 is 13 x 60 + 15 = 795 minutes since midnight, which is closer to 12:47 p.m. (767 minutes since midnight) than to any of the other departure times.

### Solution
See `8.c`
