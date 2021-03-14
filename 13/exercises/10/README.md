### Exercise 13.10
The following function supposedly creates an identical copy of a string. What’s wrong with
the function?  
```c
char *duplicate(const char *p)
{
  char *q;

  strcpy(q, p);
  return q;
}
```

### Solution
The pointer, `q`, has only been declared, not initialized. Copying `p` to `q` results in writing to unkown memory.
