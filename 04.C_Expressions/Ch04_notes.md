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

## Associativity 

### Left Associative
An operator is said to be *left associative* if it groups from left to right. Binary arithmetic operatros are all left associative.

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
