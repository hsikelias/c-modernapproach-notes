# Chapter 2: C Fundamentals


## Compiling and Linking

To run C we need the c file to a formt that a machine can execute. For C, it involves 3 steps:

1. **Preprocessing:** Program is first given to a *preprocessor*, which obey commands that beign with #(known as directives).
A preprocessor is like an editor, it can add things to the program and make modifications.

2. **Compiling:** translates the program to machine readable intructions (object code).

3. **Linker:** Final Step, linker combines object code produced by the compiler with any additional code needed for the full
executable program. This additional code includes library functions like printf that are used in the program.

## General Form of a Simple Program

```C
directives

int main(void)
{
	statements
}
```

### Directives

Before a compiler, the c program is edited by a preprocessor, the commands intended for the preprocessor are called **Directives**
#include is a directive.

`#include <stdio.h>`

This states that the information in <stdio.h> needs to be included 
into the program before it is compiled. C has various *headers*
lik <stdio.h>. We're manually including this because unlike
other programming languages, c has no built-in "read" or "write"
commands.

Directives always begin with a # character. There's no semicolon
or any other special marker at the end.


### Function

Functions are either written by the programmer or those provided
by C, the library functions. A function is simply series of 
statements that have been grouped together and given a name.

Some compute a value and some don't, we use the `return` statement
to specify what to return

The name `main` is important as it gets called automatically when
the program is executed. 

`int main(void)`

The word `int` before main indicates that the function returns an 
integer value.

`return 0`

has 2 effects: terminates the main function, and indicates that
main function returns 0.

**Calling** a function means asking a function to perform its assigned
task, like we called the `printf` function to display a string on
the screen.


## Comments

We can commment in two ways in C

one is to use /* */. /* is where the comment starts and */ where
the comment ends

Another comment is a C99 feature, which begins with //
The end for this is at the end of a line.


## Variables and Assignment

### Types

Every variable must have a type, this specifies what kind of data 
to hold. This also determines what operations can be performed with it.

Focusing on `int` and `float` for now.

A variable of type `int` means integer, which stores a whole number
such as 0,1,2232 or -3422. The range is limited, though.

A variable of type `float`, short for floating point..can store larger
numbers than an int variable, and can also store digits with decimal point.

The drawbacks are that, arithmetic on float numbers may be slower than
arithmetic on int. Since computers use binary, if we store 0.1 in a float 
variable, we may later find the variable has a value fo 0.0999999999999999987,
this happens because of rounding error.

### Declarations

Variables must be declared before they can be used. To declare
a variable, we first specify the type of the variable, then its
name.

```C
int height;
float profit;
```

We can also combine several variables, if they have the same type.

```C
int height, width, length, volume
float profit, loss
```


### Assignment

We give the variabel a value by using the = (assignment operator).

```C
height = 8;
length = 12;
width = 10;
```
You can not assign a value if it's not declared yet.

Declaring and assigning a value in one line
`int height = 8;`

If a constant has decimals and is assigned to a float variable, it is 
best practice to append the constant with letter f.

`profit = 2123.34f`

```C
	volume = width * length * height;
	printf("Height: %d\n", height);
```

%d is a placeholder for indicating where the value of height should
be filled. %d only works for int variables, for float variable we use
%f.

%f displays a number with six digits after the decimal point, we can enter the amount of decimals we want to see by adding .p between % and f

For `Profit= $2150.48` we'd printf this `printf("Profit: $%.2f\n",profit");`.

We can add multiple variables in a printf as well
`printf("Height: %d Length: %d\n", height, length);`
