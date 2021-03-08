### Exercise 13.03
Suppose that we call `scanf` as follows:
```
scanf("%d%s%d", &i, s, &j);
```

If the user enters `12abc34 56def78`, what will be the values of `i`, `s`, and `j` after the call? (Assume that `i` and `j` are `int` variables and `s` is an array of characters.)

### Solution
 - `i == 12`
 - `j == 56`
 - `s`:
   - `s[0] == a`
   - `s[1] == b`
   - `s[2] == c`
   - `s[3] == 3`
   - `s[4] == 4`
   - `s[5] == '\0'`
