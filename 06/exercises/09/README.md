### Exercise 6.09
Translate the £or statement of Exercise & into an equivalent `while` statement. You will need one statement in addition to the `whi1e` loop itself.

### Solution
```c
i = 10;
while (i >= 1) {
  printf("%d ", i++);
  i /= 2;
}
```
