### Exercise 4.07
The algorithm for computing the UPC check digit ends with the following steps:  
  
Subtract 1 from the total.  
Compute the remainder when the adjusted total is divided by 10.  
Subtract the remainder from 9.  
  
It's tempting to try to simplify the algorithm by using these steps instead:  

Compute the remainder when total is divided by 10.  
Subtract the remainder from 10  


### Solution
If a non-adjusted total is used along with `10` to calculate the difference in the checking of a check digit, it is possible for the result of `10` to occur. This would be the case for the following calculation (assume previous calculations up to this point):
```
100%10=0
10-0=10
Check digit: 10 (invalid)
```
When the difference of `10-0` is calculated. A check digit of `10` can not exist because this would violate the rule of length for a UPC, which is twelve, not thirteen.
