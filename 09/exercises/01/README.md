### Exercise 9.01
The following function, which computes the area of a triangle, contains two errors. Locate the errors and show how to fix them. (*Hint*: There are no errors in the formula.)
```c
double triangle_area(double base, height)
double product;
{
  product = base * height;
  return product / 2;
}
```

### Solution
1. The declaration, `double product`, should be inside the function defintion, above `product = base * height`
2. The second parameter, `height`, has no data-type specified. This should have `double` in front of it.
