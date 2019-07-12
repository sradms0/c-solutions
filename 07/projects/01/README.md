### Project 7.01
The `square2.c` program of Section 6.3 will fail (usually by printing strange answers) if `i * d` exceeds the maximum `int` value. Run the program and determine the smallest value of `n` that causes failure. Try changing the type of `i` to `short` and running the program again, (Don’t forget to update the conversion specifications in the call of print!) Then try `long`. From these experiments, what can you conclude about the number of bits used to store integer types on your machine?

### Solution
On this machine, it can be concluded that `short int` values are stored as 16-bits failing at 182, `int` stored as 32-bits failing at 46341 and `long int` stored as 64-bits failing at 3037000500.
