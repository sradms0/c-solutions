### Project 2.02
Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr³. Write the fraction 4/3 as `4.0f/3.0f`. (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r³.

### Solution
If trying to print the the radius in integer form, using `4/3`, this will result in a format warning.  
The program will still compile, however, the result will be a garbage value stored in memory:
```sh
$ gcc -O -Wall -pedantic -std=c99 2.c -o ./bin/2 && ./bin/2
2.c: In function ‘main’:
2.c:6:14: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
     printf("%d\n", (4 / 3) * 3.14f * 1000);
             ~^
             %f
The volume of a sphere with a 10-meter radius: 2004191424
```

See `2.c`
