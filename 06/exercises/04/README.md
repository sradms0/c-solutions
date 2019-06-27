### Exercise 6.04
Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?

(a) `for (i = 0; i < 10; i++) ...`  
(b) `for (i = 0; i < 10; ++i) ...`  
(c) `for (i = 0; i++ < 10; ) ... ` 

### Solution
(c):  
`i < 10` is evaluated before `i` is incremented, causing this loop to iterate an "extra" time, in comparison to (a) and (b).
