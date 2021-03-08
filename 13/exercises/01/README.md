### Exercise 13.01
The following function calls supposedly write a single new-line character, but some are incorrect. Identify which calls don’t work and explain why.  
(a) `printf("%c", '\n');`   
(b) `printf ("%c", "\n");`  
(c\) `printf("%s", '\n');`  
(d) `printf("%s", "\n");`   
(e) `printf ('\n');`   
(f) `printf("\n");`    
(g) `putchar('\n');`    
(h) `putchar("\n") ;`    
(i) `puts("\n");`  
(k) `puts ("");`  

### Solution
(b) `\n` is wrapped in double quotes.  
(c\) `\n` is wrapped in single quotes.  
(e) `\n` is wrapped in single quotes.  
(h) `\n` is wrapped in double quotes.  
