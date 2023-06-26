#include "main.h"

/**
 * print_str - prints string
 * @string: variadic arguments
 *
 * Description: this function prints input
 * string printable charcters and for non-
 * printable it prints its hexacode
 */

int print_str(va_list st)
{
	int i, sum = 0, ascii;
	char *str;

	str = va_arg(st, char*);

	if (!str)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		ascii = (int)str[i];

		if ((ascii > 0 && ascii < 32) || ascii >= 127)
		{
			sum += _putchar('\\');
			sum += _putchar('x');

			sum += converter((long)ascii, 16, 0);
		}
		else
		{
			sum += _putchar(str[i]);
		}
	}

	return (sum);
}
