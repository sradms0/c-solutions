### Project 4.06
European countries use a 13-digit code, known as European Article Number (EAN) instead of the 12-digit Universal Product Code (UPS) found in North America. Each EAN ends ith a check digit, just as a UPC does. The technique for calculating the check digit is also similar:    
```
    Add the second, fourth, sixth, eight, and twelfth digits.  
    Add the first, third, fifth, seventh, ninth, and eleventh digits.  
    Multiply the first sum by 3 and add it to the second num.  
    Subtract 1 from the total.  
    Compute the remainder when the adjusted total is divided by 10.  
    Subtract the remainder from 9.  
```

For example, consider Güllüoglu Turkish Delight Pistachio & Coconut, which has an EAN of 8691484260008. the first sum is 6 + 1 + 8 + 2 + 0 + 0 = 17, and the second sum is 8 + 9 + 4 + 4 + 6 + 0 = 31. Multiplying the first sum 3 and adding the second yields 82. Subtracting 1 gives 81. The remainder upon dividing by 10 is. When the remainder is subtracted from 9, the result is 8, which matches the last digit of the original code. Your job is to modify the `upc.c` program of Sectoin 4.1 so that it calculates the check digit for an EAN. The user will enter the first 12 digits of the EAN as a single numbers:
```
Enter the first 12 digits of an EAN: 8691484260008
Check digit 8
```
### Solution
See `6.c`
