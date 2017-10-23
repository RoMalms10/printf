#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/*function definitions*/

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
  * print_char - prints a char to standard out
  * @list: the va_list we want to increment through
  * Return: 1 because we printed only 1 char
  */
int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	write(1, &c, 1);
	return (1);
}

/**
  *
  *
  *
  */
int print_string(va_list list)
{
	char *str;
	int i;
	char c;

	str = va_arg(list, char *);
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		write(1, &c, 1);
	}
	return (i);
}

/**
  *
  *
  */
int print_non(char ch1, char ch2)
{
	if (ch2 == '%')
	{
		write(1, &ch2, 1);
		return (1);
	}
	else
	{
		write(1, &ch1, 1);
		write(1, &ch2, 1);
		return (2);
	}
}
/**
 *
 *
 */
int print_num(va_list list)
{
	int num = va_arg(list, int);
	char negative_sign = '-';
	unsigned int n;
	int count = 0;
	int x = 1;

	if (num < 0)
	{
		n = num * (-1);
		write(1, & negative_sign, 1);
	}
	else
	{
		n = num;
	}
	while ((n/x) != 0)
	{
		count++;
		x *= 10;
	}
	print_recursive(n);
	return (count);
}
