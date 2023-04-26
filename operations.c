#include "main.h"

/**
 * print_c - prints character
 * @c: variadic arguments
 *
 * Description: this function prints input character
 * Return: 1 always
 */

int print_c(va_list c)
{
	int p;

	p = va_arg(c, int);

	return (_putchar(p));
}

/**
 * print_s - prints character
 * @s: variadic arguments
 *
 * Description: this function prints input string
 * Return: 1 always
 */

int print_s(va_list s)
{
	int i, sum = 0;
	char *str;

	i = 0;
	str = va_arg(s, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		sum++;
	}
	return (sum);
}
/**
 * print_d - prints character
 * @d: variadic arguments
 *
 * Description: this function prints input integer
 * Return: 1 always
 */

int print_d(va_list d)
{
	int p;

	p = va_arg(d, int);

	return (_putchar(p));
}

/**
 * print_i - prints character
 * @i: variadic arguments
 *
 * Description: this function prints input digit
 * Return: 1 always
 */

int print_i(va_list i)
{
	int p;

	p = va_arg(i, int);

	return (_putchar(p));
}

