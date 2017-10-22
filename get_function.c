#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

void (*get_func(char *s))(va_list)
{
	ops_f print_op = {
		{"%s", print_string},
		{"%c", print_char},
		{"%%", print_percent},
		{NULL, NULL}
	};
	int index;

	index = 0;
	while (print_op[index].operation != NULL)
	{
		if(_strcmp(s, print_op[index].operation) == 0)
			return (print_op[index].func)
	}
	return (NULL);
}
