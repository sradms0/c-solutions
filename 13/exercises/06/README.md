### Exercise 13.06
Write a function named `censor` that modifies a string by replacing every occurrence of `foo` by `xxx`. For example, the string `"food fool"` would become `"xxxd xxl"`. Make the function as short as possible without sacrificing clarity.

### Solution
```c
void censor(char *s)
{
    for (; *s != '\0'; s++) {
        if (*s == 'f' && *(s+1) == 'o' && *(s+2) == 'o') {
            *s = *(s+1) = *(s+2) = 'x';
        }
    }
}
```
