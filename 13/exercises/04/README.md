### Exercise 13.04
Modify the `read_line` function in each of the following ways:  
(a) Have it skip white-space before beginning to store input characters.  
(b) Have it stop reading at the first white-space character. *Hint*: To determine whether or not a character is white-space, call the `isspace` function.  
(c\) Have it stop reading at the first new-line character, then store the new-line character in the string.  
(d) Have it leave behind characters that it doesn’t have room to store.  

### Solution
(a) 
```c
int read_line(char str[], int n)
{
  int ch, i = 0;

  while (isspace(ch = getchar()));
  do {
    if (i < n)
      str[i++] = ch;
  } while ((ch = getchar()) != '\n');
  str[i] = '\0';
  return i;
}
```

(b)
```c
int read_line(char str[], int n)
{
  int ch, i = 0;

  while (!isspace(ch = getchar()) && ch != '\n') 
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
```

(c)
```c
int read_line(char str[], int n)
{
  int ch, i = 0;

  do {
    if (i < n)
      str[i] = getchar();
  } while (str[i++]  != '\n');
  str[i] = '\0';
  return i;
}
```  

(d)
```c
int read_line(char str[], int n)
{
  int ch, i = 0;

  for (i = 0; i < n && (ch = getchar()) != '\n'; i++)
      str[i] = ch;
  str[i] = '\0';
  return i;
}
```  
