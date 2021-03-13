### Exercise 13.07
Suppose that `str` is an array of characters. Which one of the following statements is not equivalent to the other three?  

(a) `*str = 0;`  
(b) `str[0] = '\0';`  
(c) `strcpy(str, "");`   
(d) `strcat (str, "");`  

### Solution
(d) `strcat` appends a null-character  while other operations assign null to the first chracter of `str`.
