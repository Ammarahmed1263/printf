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

	str = va_arg(s, char*);
	
	if (str == NULL)
		str = "(null)";

	i = 0;
	while (str[i] != '\0')
	{
		sum += _putchar(str[i]);
		i++;
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
	unsigned int temp, multiple = 1, sum = 0;

	p = va_arg(d, int);
	
	if (p < 0)
	{
		p *= -1;
		sum += _putchar('-');
	}

	temp = p;
	while (temp > 9)
	{
		temp /= 10;
		multiple *= 10;
	}

	while (multiple > 0)
	{
		sum += _putchar(((p / multiple) % 10) + '0');
		multiple /= 10;
	}
	return (sum);
}

