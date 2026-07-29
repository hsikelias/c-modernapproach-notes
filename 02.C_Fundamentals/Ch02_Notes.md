# C Fundamentals

## Compilation Pipeline

1. **Preprocessing**
    * Handles directives starting with `#`.
    * Example:

    ```c
    #include <stdio.h>
    ```
    * `#include` copies the contents of the header into your program **before** compilation.
    * `#define` creates **macros** (compile-time text substitution).

2. **Compiling**
    * Converts C source code into **object code** (`.o`).

3. **Linking**
    * Combines object code with required libraries to create the executable.
    * Library functions like `printf()` are linked here.

                                    ---

## Headers

* Headers contain **function declarations**, macros, and other definitions.
* Include only the headers your program needs.
* Example:

```c
    #include <stdio.h>   // printf, scanf
```

      ---

## Variables

* Every variable **must be declared before use**.
* A variable's type determines:

* what values it can store.
* how much memory it uses.

```c
int height;
float profit;
```

### Assignment

```c
height = 8;
```

---

## Integer Division (Easy to Forget)

When **both operands are `int`**, C performs **integer division**.

```c
5 / 2      // 2
```

The decimal part is discarded (**truncated**) **before** the result is stored.

Even this gives `2.0`, not `2.5`:

```c
float x = 5 / 2;   // x = 2.0
```

At least one operand must be a floating-point type:

```c
float x = 5.0 / 2;     // 2.5
float y = (float)5 / 2; // 2.5
```

---

## `scanf()` Behavior

`scanf()` waits until the user presses **Enter**.

When Enter is pressed, the terminal sends a hidden newline character (`'\n'`) after the input. This is why input functions sometimes appear to "leave behind" a newline.

---

## Macro Definitions

Macros are handled by the **preprocessor**.

```c
#define INCHES_PER_POUND 166
```

* No `=` and no semicolon.
* The preprocessor replaces every occurrence of `INCHES_PER_POUND` with `166` before compilation.

---

## Useful GCC Flags

```bash
gcc -std=c99 -Wall -W -pedantic -o program program.c
```

| Flag        | Purpose                                                  |
| ----------- | -------------------------------------------------------- |
| `-std=c99`  | Use the C99 standard.                                    |
| `-Wall`     | Enable the most common warnings (always use).            |
| `-W`        | Enable additional warnings.                              |
| `-pedantic` | Warn/error about non-standard C features.                |
| `-ansi`     | Restrict GCC extensions and use ANSI C (older than C99). |

