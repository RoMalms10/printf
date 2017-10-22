#ifndef HOLBERTON_H
#define HOLBERTON_H

typedef struct ops
{
	char *operation;
	void (*func)(va_list);
} ops_f;

/*functions go here*/
int _printf(const char *format, ...);

#endif
