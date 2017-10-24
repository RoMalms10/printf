## Printf Project
### Synopsis
The objective of the Printf project is to learn the base functionality of printf and take those concepts and apply them ourselves to create a new printf that works in the same way.

### Environment
Our Printf project has been tested on `Ubuntu 14.04 LTS` via Vagrant in VirtualBox.

### Repository Contents
The repository contains the following files:
|   **File**   |   **Description**   |
|--------------|---------------------|
| new\_printf.c | Our take on the printf function |
| holberton.h   | Contains file declarations |
| get\_function.c | Chooses which function to use based on a specific format modifier |
| functions.c  | Contains the functions that handle how to print different types |

### Example of Use
`int main(void)
\{
	_printf("Print a %s\n", "string");
	return (0);
\}
============================================
(hbtn)$ ./print
Print a string
(hbtn)$
`

###Notes
Other format modifiers are curretly in develoopment.

###To do list
Increase the amount of commands that are accepted by our rendition of printf:
1. Format modifiers:
* %r
* %R
* %x
* %X
* %u
* %o
* %S
* %p
2. Flag characters:
* +
* space
* #
* 0
* -
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
