### Exercise 4.02
If `i` and `j` are positive integers, does `(-i)/j` always have the same value as `-(i/j)`? Justify your answer.
### Solution
No, as this depends on the C standard being used. The C89 standard states that a quotient can either be rounded up or down when either operand is negative. As an example, `-9/7` would either be `-1` or `-2`. This is not the case for the C99 standard, so the quotient here would be an expected and constistent value.
