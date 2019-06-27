### Exercise 6.05
Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?

(a) `while (i < 10) {...}`  
(b) `for (; i < 10;) {...}`  
(c) `do {...} while (i < 10);`  

### Solution
(c): This loop is executed one extra time compared to (a) and (b), as the conditional check of `i < 10` is evaluated after rather than before.
