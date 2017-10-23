#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

int (*get_func(char ch))(va_list)
{
	ops_f print_op[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};
	int index;

	index = 0;
	while (print_op[index].operation != '\0')
	{
		if(ch == print_op[index].operation)
			return (print_op[index].func);
		index++;
	}
	return (NULL);
}
