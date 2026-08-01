# Formatted Input/Output

## The printf Function

- "conversion specification": Begin with the % character, its a placeholder 
representing a value to be filled in during printing. Information following 
the % character specifies how the value is converted from the binary form to 
printed form. %d tells that `printf` should convert an int value from binary 
to string of decimal digits.


Conversion characters can have the form `"%m.pX"` or `%-m.pX", where m and p 
are integer constants and X is a letter. 

    - m & p are optional, if p is omitted the period that seperates m and p 
    are also dropped.

    - "m" specifies the minimum number of characters to print, if the value 
    requires fewer than m characters, the value is right justified, so extra 
    space precede the value.
    
    - So `%4d`, 123 will be displayed as _123 (_ is space)

    - If the value to be printed needs more than "m", it will automatically 
    expand to the necessary size. So, even 12345 would display as 12345 with %4d
        
    - Putting a - sign causes left justification, so %-4d would display 123 as 123_


**NOTE: M adds determines num of characters, P helps in adding 0s etc if there
is less characters than the limit**

- d: displays an integer in decimal form, p indicates minimum num of digits to 
display, extra zeros are added if needed

- e: displays a floating point number in exponential format.

- f: displays a floating point number in fixed decimal format, without exponent

- g: displays a floating point number in either exponential or fixed decimal 
format, depending on the number's size. Unlike the f conversion, the g won't 
show trailing zeros. If the value to be printed has no digits after the decimal 
point, g doesn't display the decimal point.

-----------

## Escpae Sequences

- `\a` : Alert (bell) - Causes an audible beep on most machines
- `\b` : Backspace - moves the cursor back one position
- `\t` : Horizontal tab - moves the cursor to the next tab stop
- `\n` : New line - Advances the cursor to the next tab stop
                        

To print " inside of "..", we can use `\"`

```c
printf("\"Hello!\"");
// Output: "Hello!"

// and to print \, we can't just add itonce inside the strings as the 
compiler will assume its an escape sequence so use 

```

-----------

## The scanf Function

**What happens when you omit & before variables in a scanf function?**

The value that is read from the input won't be stored in the variable; instead, 
the variable will retain its old value(which may be meaningless if the variable 
wasn't given an initial value).


```C
// 1-20.3-4.0e3 
// How would scanf read the above input? 

scanf("%d%d%f%f", &i, &j, &x, &y);

// %d, first is 1 then scanf moves to next character -, this won't appear 
// inside an int.. so scanf stores 1 to i and - back to its place

// %d, reads -,2,0 and . int can't have a decimal point so stores -20 to j

// %f, reads .3,-. Since floating points can't contain a - after a digit, 
// scanf just stores 0.3 into x and puts - back

// %f, reads the characters -,4,.,0,e,3. Since floating point numberts can't 
// contain new line, scanf stores -4.0*10^3 into y
```

But, If we did have just one variable in scanf, the function would end by just 
giving 1 to i, it stops after seeing theres a -.. which won't go in an int after a 
number

**IMPORTANTT!!**
What *scanf* does is **called pattern matching**, if user enters bad input, *scanf*
will reject it and that remaining part will sit in the input buffer. The program
will not pause to let the user enter a new input on the next *scanf* call. The new *scanf* reads the exact leftover bad input, which causes a error infinite loop.

- programs don't read user in put as it is typed. Instead, input is stored in a 
  hidden buffer, to which `scanf` has access. This way it is easy for `scanf` to 
  put characters back into the buffer for subsequent reading.
