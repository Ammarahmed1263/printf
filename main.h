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
int converter(long dec, int base, int lower);
int print_bin(va_list n);
int print_oct(va_list n);
int print_hex(va_list n);
int print_hex_u(va_list n);
int print_u(va_list u);
int print_str(va_list st);
int (*chs_op(char s))(va_list v_arg);
#endif
