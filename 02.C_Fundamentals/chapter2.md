# C Fundamentals

## Compiling and Linking

- **Preprocessing**: The program is first given to a *preprocessor*, which obeys commands that begin with #, which are known as *directives*. 

- **Compiling**: The modified program goes to the compiler, which translates the human code to machine instructions(*object code*). 

- **Linking**: The final step, a linker combines the object code produced by the compiler with additional code needed to yield a complete executable program. This additionalc ode includes library functions like `printf`.

## General Form of a Simple Program

Commands intended for the preprocessor are called *directives*,

```c
#include <stdio.h>
```
This tells the compiler that the information in <stdio.h> to be included before the promgram is compiled.
C has a lot of **Headers** like <stdio.h>, each with their own purpose.

Functions in C are either implemented by the programmer or are from a library, some functions return a value and some don't.

### Variables and Assignment

- Every variable must have a type, this specifies what kind of data C will hold.
- `int` is one of the data type, storing 1, 392, -234
- `float` means floating-point, it can store much larger numbers and it can store digits with decimal points. 

### Declarations

- Variables must be declared before they can be used, we do that by first specifying the variable type and then its name.

```c
int height;
float profit;
```

### Assignment
- A variable can be given a value by assignment.

```c
height = 8; //obviously we need to declare the variable before assigning a value.
```


WHEN ONE INTEGER IS DIVIDED BY ANOTHER, THE ANSWER IS "TRUNCATED", MEANING THE DIGITALS AFTER THE DECIMAL POINT ARE LOST, EVEN IF WE TURN THE INTS ANSWER TO FLOAT WE GET LETS SAY 5.0000.

The language decides that the output must also be an int 
