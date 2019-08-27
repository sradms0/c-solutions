### Exercise 10.02
The following program outline shows only function definitions and variable declarations.
```c
int b, c;

void f(void)
{
  int b, d;
}

void g(int a)
{
  int c;
  {
    int a, d;
  }
}

int main(void)
{
  int c, d;
}
```

For each of the following scopes, list all variable and parameter names visible in that scope. If there's more than one variable or parameter with the same name, indicate which one is visble.

(a) The `f` function  
(b) The `g` function  
(c) The block in which `a` and `d` are declared  
(d) The `main` function  

### Solution
(a) variable(s): `b` in scope of `f`, `c`, `d`   
(b) parameter(s): `a`; variable(s): `b`, `c` in scope of `g`, `a`, `d`  
(c) variable(s): `b`, `a`, `c` in scope of `g`, `d`  
(d) variable(s): `b`, `c` in scope of `main`, `d`  
