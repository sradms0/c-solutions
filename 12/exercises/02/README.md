### Exercise 12.02
Suppose that `high`, `low`, and `middle` are all pointer variables of the same type, and that `low` and `high` point to elements of an array. Why is the following statement illegal, and how could it be fixed?
```c
middle = (low + high) / 2;
```
### Solution
Adding pointers together is illegal. The following can fix:
```c
middle = low + (high - low) / 2;
```
