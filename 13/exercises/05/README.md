### Exercise 13.05
(a) Write a function named `capitalize` that capitalizes all letters in its argument. The argument will be a null-terminated string containing arbitrary characters, not just letters. Use array subscripting to access the characters in the string. *Hint*: Use the `toupper` function to convert each character to upper-case.  
  
(b) Rewrite the capitalize function, this time using pointer arithmetic to access the
characters in the string.

### Solution
(a)
```c
void capitalize(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (isalpha(s[i])) 
            s[i] = toupper(s[i]);
}
```  
(b)
```c
void capitalize(char *s)
{
    for (; *s != '\0'; s++)
        if (isalpha(*s)) 
            *s = toupper(*s);
}
```
