### Exercise 2.01
Create and run Kernighan and Richie's famous "hello, world" program:
```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```
Do you get a warning message from the compiler? If so, what's needed to make it go away?

### Solution
A warning is only produced when compiling under the c89 standard:
```sh
$ gcc -O -Wall -W -pedantic -ansi -std=c89 1.c -o 1
1.c: In function ‘main’:                                                                                                                                       
1.c:6:1: warning: control reaches end of non-void function [-Wreturn-type]                                                                                     
 }
 ^
```
Compiling `1.c` under the c99 standard, no warning is produced:
```sh
$ gcc -O -Wall -W -pedantic -ansi -std=c99 1.c -o 1

```

To illiminate this warning, a `return` statment should be used (see `./1b.c`)
