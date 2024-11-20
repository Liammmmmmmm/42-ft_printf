# ft_printf

`ft_printf` is a custom implementation of the `printf` function in C. This project is part of a 42 curriculum where the goal is to understand how variadic arguments work, along with string manipulation and dynamic memory management.

## Features

The `ft_printf` function handles a subset of the format specifiers from the standard `printf` function. The supported specifiers are:

- `%c` : Prints a character.
- `%s` : Prints a null-terminated string.
- `%p` : Prints a pointer in hexadecimal format.
- `%d` : Prints a signed decimal (base 10) number.
- `%i` : Prints a signed integer (base 10) number (same as `%d`).
- `%u` : Prints an unsigned decimal (base 10) number.
- `%x` : Prints a number in lowercase hexadecimal (base 16).
- `%X` : Prints a number in uppercase hexadecimal (base 16).
- `%%` : Prints a literal percent sign.

## Installation

1. Clone the repository to your local machine:
```bash
git clone https://github.com/username/ft_printf.git
```

2. Compile the project using `Make`:
```bash
make
```

3. Use it in your code with
```c
#include "ft_printf.h"
```

---

Feel free to take a look at how I implemented this project, but don’t just copy-paste. Understanding the code and the logic behind it will help you learn and improve your own skills!
