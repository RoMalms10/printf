#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
	int i, count;
	int (*f)(va_list);
	va_list list;

	va_start(list, format);
	i = count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				count += _putchar('%');
				i++;
			}
			else
			{
				f = get_func(format[i + 1]);
				count += f(list);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	return (count);
}
