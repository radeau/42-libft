
# 42 Libft Project

The 42 libft project is a C library that regroups common functions that can be used in all other 42 projects. The project involves rewriting some of the standard C library functions, understanding them, and learning to use them.

## Usage

To use the libft library, follow the below steps:

1. Clone this repository into your local machine:
```
git clone https://github.com/<username>/libft.git
```

2. Compile the library using the `Makefile`:
```
make all
```

3. Include the header file `libft.h` in your source code:
```
#include "libft.h"
```

4. Compile your program with the library:
```
gcc -Wall -Wextra -Werror -I./libft/includes -L./libft -lft <your_program>.c -o <output>
```

Alternatively, you can compile the library along with your source code by adding the library's source files to your project's compilation process.

## Functions

The table below shows the list of standard C library functions that have been rewritten and included in this project.

| Function      | Description                                                                                                     |
| ------------- | --------------------------------------------------------------------------------------------------------------- |
| ft_memset     | Fill a block of memory with a specified value                                                                    |
| ft_bzero      | Fill a block of memory with zeros                                                                               |
| ft_memcpy     | Copy a block of memory from source to destination                                                               |
| ft_memmove    | Copy a block of memory from source to destination, even if the blocks overlap                                    |
| ft_memchr     | Search a block of memory for a specified byte                                                                   |
| ft_memcmp     | Compare two blocks of memory                                                                                   |
| ft_strlen     | Get the length of a string                                                                                      |
| ft_strdup     | Duplicate a string                                                                                              |
| ft_strcpy     | Copy a string from source to destination                                                                        |
| ft_strlcpy    | Copy a string from source to destination with a specified maximum length                                        |
| ft_strcat     | Concatenate two strings                                                                                         |
| ft_strlcat    | Concatenate two strings with a specified maximum length                                                         |
| ft_strchr     | Find the first occurrence of a character in a string                                                            |
| ft_strrchr    | Find the last occurrence of a character in a string                                                             |
| ft_strstr     | Find the first occurrence of a substring in a string                                                            |
| ft_strnstr    | Find the first occurrence of a substring in a string with a specified maximum length                            |
| ft_strcmp     | Compare two strings                                                                                             |
| ft_strncmp    | Compare two strings with a specified maximum length                                                             |
| ft_atoi       | Convert a string to an integer                                                                                   |
| ft_isalpha    | Check if a character is an alphabetic character                                                                  |
| ft_isdigit    | Check if a character is a digit                                                                                  |
| ft_isalnum    | Check if a character is an alphabetic or a digit character                                                       |
| ft_isascii    | Check if a character is a 7-bit US-ASCII character                                                               |
| ft_isprint    | Check if a character is a printable character                                                                    |
| ft_toupper    | Convert a character to uppercase                                                                                 |
| ft_tolower    | Convert a character to lowercase                                                                                 |
| ft_calloc     | Allocate and zero-initialize a block of memory                                                                   |

## Conclusion

The 42 libft project is an essential building block for other 42 projects. It contains some of the most commonly used C library functions that have been rewritten and optimized for efficiency.
