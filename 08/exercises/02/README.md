### Exercise 8.02
The Q&A section shows how to use a `letter` as an array subscript. Describe how to use a digit (in character form) as a subscript.

### Solution
Since the first base-10 digit, 0, in char form, '0', contains a 48 decimal value, the difference between any digit-char and '0' would result in a valid index-subscript:
```c
arr[digit - '0'] = 0;
```
