### Exercise 14.04
For each of the following macros, give an example that illustrates a problem with the macro and show how to fix it.  
(a) `#define AVG(x,y) (x+y)/2`  
(b) `#define AREA(x,y) (x)*(y)`  

### Solution
##### (a)
Example problem:  
 - Macro call:
 ```c
/* expected value of 1 */
int i = AVG(1 && 1, 1 && 1); 
 ```
 - The expression of `i` will be replaced with:
 
 ```c
 /* value will be 0 */
 int i = (1 && 1 + 1 && 1) / 2
 ```

Solution:  
 ```c
#define AVG(x,y) (((x)+(y))/2)
 ```
 
##### (b)  
Example problem:  
 - Macro call:
 ```c
/* expected value of 1 */
int i = 4/AREA(2,2);
 ```
 - The expression of `i` will be replaced with:
 
 ```c
 /* value is 4 */
 int i = 4 / (2) * (2);
 ```

Solution:  
 ```c
#define AREA(x,y) ((x)*(y))  
 ```

