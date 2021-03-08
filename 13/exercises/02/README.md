### Exercise 13.02
Suppose that `p` has been declared as follows:
```
char *p = "abc";
```

Which of the following function calls are legal? Show the output produced by each legal call, and explain why the others are illegal.

(a) `putchar(p);`   
(b) `putchar(*p);`  
(c\) `puts(p);`  
(d) `puts(*p);`

### Solution
- illegal:
  - (a) `p` is not a `char`.
  - (e) `*p` is not a pointer.
- legal:
  - (b) `a`
  - (c) `abc`
