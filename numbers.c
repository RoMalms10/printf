#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
void print_recursive(unsigned int num)
{
	unsigned int integer;

	if ((num / 10) != 0)
		print_recursive(num / 10);
	integer = num % 10 + '0';
	write(1, &integer, 1);
 }
