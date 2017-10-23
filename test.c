#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	x = printf("Character:[%c]\n", 'H');
	printf("%d\n", x);
	x = _printf("Character:[%c]\n", 'H');
	printf("%d\n", x);
	x = _printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", x);
	x = printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", x);
	x = _printf("I want: %s please!\n", "cake");
	printf("%d\n", x);
	x = printf("I want: %s please!\n", "cake");
	printf("%d\n", x);
	x = _printf("Give me one percent %%\n");
	printf("%d\n", x);
	x = printf("Give me one percent %%\n");
	printf("%d\n", x);
	x = _printf("Print a char: %c %r\n", 'H');
	printf("%d\n", x);
	x = printf("Print a char: %c %r\n", 'H');
	printf("%d\n", x);
	return (0);
}
