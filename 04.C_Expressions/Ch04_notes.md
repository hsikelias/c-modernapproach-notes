# Expressions

```C
a + (b * c) // + is the operator, a and (b*c) are the operands
```

## Arithmetic Operators

### Unary
1. + unary plus
2. - unary minus

### Binary
Named 'binary' because they require two operands.

#### Additive
1. + addition
2. - subtraction

#### Multiplicative
1. * multiplication
2. / divison
3. % remainder


**NOTE:**
- In binary operators, except '%' allow either integer or floating operands, with mixing allowed.
- when both of the operands of the '/' operator are an integer, the results decimals are removed.. so if 0.5 was the actual answer, you get 0
- using 0 for the right operand for '/' and '%' causes undefined behavior.
- when / and % are used with negative operands is tricky, C89 and C99 have different rules. 
- In C99, The result of a divison is always *truncated* toward zero so -9/7 has the value -1. The value of i % j has the same sign as i.

**Implementation-defined** behavior, C standard deliberately leaves parts of the language unspecified, so the behavior of the / and % is an example of this.
C just matches the way that hardware behaves, some CPUs yield -1 when -9 is divided by 7, while others produce -2.

## Order precedence and Associativity 

### Associative
An operator is said to be *left associative* if it groups from left to right. Binary arithmetic operatros areleft associative.

```C
i - j - k  // = (i - j) - k
i * j / k  // = (i * j) / k
```
An operator is right associative if it groups from right to left, unary airthmetic are right.

```C
- + i // = -(+i)
```

```C
    // scanf doesn't format strings the same way as printf does.
    // 1 in %1d when used in printf it means minimum field width, but when used in scanf 
    // is is a maximum field with, it will not consume more than that many characters.
    scanf("%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5);
```

## Assignment Operators

```C
    j = 5; // value of 5 is now copied to j... we can add any variable in place of 5 as well
``` 

In many programming languages, assignment = is a statement. In C, however assignment is an operator, the act of assignment produces the result.
Most operators do not modify their operands, like i + j simply computes a value.. = is an example of operators that have **side effects**.

```C
    int i;
    int j;
    int k;

    i = j = k = 0; // i = (j=(k=0));
    /*
        since = is right associative, it goes from right to left, first 0 value copied to k and then j = (k=0), and finally i = (j=(k=0)), 0 assigned to i
    */
```

## L Value/ lvalue

The assignment operator doesn't allow its left operand to be an `lvalue`.  An `lvalue`, represents an object stored in computer memory, not a constant or the result of a computation; expressions such as i * 2 or 10 are not lvalues and cannot be used as a left operand with assignment operator.

```C
    // wrong examples
    12 = j;
    i + j = 0;
    -i = j;
```

## Compount Assignment

* v += e    // same as v = v + e, adds old v value to e and share the new value to v
* v -= e    // same as v = v - e, subtracts e from v, storing the result in v
* v *= e    // same as v = v * e, multiplies v by e, storing the result in v
* v /= e    // same as v = v / e, divides v by e, storing the result in v
* v %= e    // same as v = v % e, computes the remainder when v is divided by e, storing the result in v


**NOTE:**
- Remember order precedence, i *= j + k isn't the same as i = i * j + k.
- i *= j + k expands to i = i * (j + k) and not i =  (i * j) + k

If you type i=+j, instead of i+= j.. it would mean a completely different thing, the expression would be equivalent to i=(+j), and = operator is right associative.


## Increment and Decrement Operators

++, `increment` operators and -- `decrement` operators.

These operators can either be used as **prefix** operators or **postfix** operators, prefix being ++i and postfix being i++, and these operators *do* modify the value of it's operand.

`++i` means increment immediately and use that value, whereas i++ means use the old value for now and increment the i later, it is safe to assume the i value is incremented before the next statement is executed.

## Expression Evaluation

**Precedence** | **Name**         |   **Symbol**   | **Associativity**
    1           increment(postfix)         ++               left
                decrement(postfix)         -- 
    
    2           increment(prefix)         ++               right
                decrement(prefix)         -- 
                unary plus                -
                unary minus               +

    3           multiplicative          % / *               left

    4           additive                  + -               left

    5           assignment         = *= /= %= += -=         right


AVOID writing expressions that access the value of a variable and also modify the variable elsewhere in the expression
example: (b = a + 2) - (a - 1)

AVOID making your expressions depend on a particular order of operation. example: j = i * i++

The behaviors mentioned above are **undefined**, it may lead to crash or worse it compiles and with every different compiler you get a different result.
