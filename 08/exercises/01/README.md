### Exercise 8.01
We discussed using the expression `sizeof(a) / sizeof(a[0])` to calculate the number of elements in an array. The expression `sizeof(a) / sizeof (t)`,where `t` is the type of `a`’s elements, would also work, but it’s considered an inferior technique. Why?  

### Solution
It is possible that the first element of `a` could be a negative number, an `unsigned int`. If this was the case, comparing a `signed int` variable, `i`, during iteration, `i` would always be greater than the result of the expression. Therefore, an iteration of `a` would never occur due to following expression: `i < sizeof(a) / sizeof(a[0])` 

Also, `sizeof` returns a value type of `size_t`, an `unsigned int`. This could result in a compiler warning.
