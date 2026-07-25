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


*INTERESTING*
- when you use a scanf statement, it waits for the user to send an input and when the user presses enter, the program adds a hidden /n new line character, in case of print there is no hidden /n character as such.

- we can define constants through a feature known as "macro definitions". Along with #include, this is considered as a preprocessing directive as well.

```c
#define INCHES_PER_POUND 166
```


### OPTIONS OF GCC TO FIND ERRORS

1. `-std=c99`: Specifies which version of C the compiler should use to check the program

2. `-ansi`: Turns off features of GCC that aren't standard C and enables a few standard features that are normally disabled.

3. `-pedantic`: Issues all warning required by the C standard. Causes programs that use nonstandard features to be rejected.

4. `-Wall`: Causes the compiler to produce warning messages when it detects possible errors. Used in conjuction with -o for maximum effect.

5. `-W`: Additional warnings beyond what '-Wall' produces.
