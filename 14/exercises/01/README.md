### Exercise 14.01
Write parameterized macros that compute the following values.  
(a) The cube of x.  
(b) The remainder when n is divided by 4.  
(c) 1 if the product of x and y is less than 100, 0 otherwise.

Do your macros always work? If not, describe what arguments would make them fail.

### Solution
##### (a)  
  ```c
#define CUBE(x) (x*x*x)
```
This macro will not work if `x` is anything but a numeric type.  
e.g.:  
```c
char *c = "c";
CUBE(c);
```
`char` types will work for this macro.

##### (b)
```c
#define MOD(n) ((n)%4)
```
This macro will not work if `n` is not an integer; e.g.: `MOD(4.f)`

##### (c)  
```c
#define PROD_LT_100(x,y) ((x*y) < 100)
```
This macro will not work if `n` is anything but a numeric type.  
e.g.:  
```c
char *c = "c";
PROD_LT_100(1, c);
```
`char` types will work for this macro.
