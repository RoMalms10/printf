## Printf Project
### Synopsis
The objective of the printf project is to learn the base functionality of printf, take those concepts and apply them ourselves to create a new printf that works in the same way.

### Environment
Our printf project has been tested on `Ubuntu 14.04 LTS` via Vagrant in VirtualBox.

### Repository Contents
The repository contains the following files:

|   **File**   |   **Description**   |
| -------------- | --------------------- |
| new\_printf.c | Our take on the printf function |
| holberton.h   | Contains file declarations |
| get\_function.c | Chooses which function to use based on a specific format modifier |
| functions.c  | Contains the functions that handle how to print different types |

### Description of Functions

| **Function** | **Description** |
| -------------- | ----------------- |
|int \_printf(const char \*format, ...);|This function returns the number of characters printed, excluding the null byte used to end output to strings. If an output error is encountered, a negative value is returned.|
|int \_putchar(char c);| Writes a character to `stdout`. Returns `1` because a character was printed.|
|int (\*get\_func(char c))(va\_list list);| Matches the character provided to the appropriate function. Returns `NULL` if nothing matches.|
|int print\_char(va\_list list);| Writes a character to `stdout` by retrieving  the next argument in `va_list`. Returns `1` because one character was printed. |
|int print\_string(va\_list list);| Writes one character at a time to `stdout`. Prints `(null)` if string is `NULL`. Returns the number of times it prints a character. |
|int print\_non(char ch1, char ch2);| Writes non supported format modifiers to `stdout`. Returns `1` if the character after the format modifier is a  `%`, or returns `2` for anything else.
|int print\_num(va\_list list);| Prints a number to `stdout`. Returns the amount of individual numbers and sign printed. |

### How to install
Start by cloning the repository to a directory, then run the executable.
```
(hbtn)$ git clone https://github.com/RoMalms10/printf.git
```
### Compilation

This code was compiled with the following flags:
` (hbtn)$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c -o print `

###### Example code

```
int main(void)
{
	_printf("Print a %s\n", "string");
	return (0);
}
=========================================
(hbtn)$ ./print
Print a string
(hbtn)$
```

### Notes
Other format modifiers are currently in development.

### To do list
Increase the amount of commands that are accepted by our rendition of printf:
1. Format modifiers:
* r
* R
* x
* X
* u
* o
* S
* p
2. Flag characters:
* \+
* space
* \#
* 0
* \-
3. Length Modifiers:
* l
* h
* field width for non-custom conversion specifiers

### Authors

* [**Robert Malmstein**](https://github.com/RoMalms10)
* [**Kevan Lucchini**](https://github.com/kevanlucc)

<p align="center">
	<img src="https://intranet.hbtn.io/assets/holberton-logo-simplified-d4e8a1e8bf5ad93c8c3ce32895b4b53749b477b7ba7342d7f064e6883bcd3be2.png">
</p>
