#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct operations - stores char with its corrosponding function
 * @str: operation character
 * @f: function corrosponding to operation
 */
typedef struct operations
{
	char *str;
	int (*f)(va_list inpt);
} s_op;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int (*chs_op(char s))(va_list v_arg);
#endif
