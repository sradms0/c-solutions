### Exercise 6.10
Show how to replace a `continue` statement by an equivalent `goto` statement.
### Solution

##### continue:
```c
int i = 0;
printf("odd: ");

for(; i < 10; i++)  {
  if ((i % 2) == 0) continue;
  printf("%d ", i);
}

printf("\n");
```

##### goto:
```c
int i = 0;
printf("odd: ");

even: i++;
for(; i < 10; i++)  {
  if ((i % 2) == 0) goto even;
  printf("%d ", i);
}

printf("\n");
```
