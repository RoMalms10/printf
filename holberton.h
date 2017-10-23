#ifndef HOLBERTON_H
#define HOLBERTON_H

typedef struct ops
{
	char operation;
	int (*func)(va_list);
} ops_f;

/*functions go here*/
int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(char ch))(va_list);
int print_char(va_list list);
int print_string(va_list list);
int print_non(char ch1, char ch2);
int print_num(va_list list);
void print_recursive(unsigned int num);
#endif
