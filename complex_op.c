#include "main.h"

/**
 * print_p - prints value of pointer
 * @p: variadic arguments
 *
 * Description: this function prints input
 * address in hexadecimal of pointer value
 *
 * Return: number of printed characters;
 */
int print_p(va_list p)
{
	uintptr_t num;
	int sum = 0, i;
	char nl[] = "(nil)";

	void *ptr = va_arg(p, void *);

	if (ptr == NULL)
	{
		i = 0;
		while (nl[i] != '\0')
			sum += _putchar(nl[i++]);

		return (sum);
	}

	num = (uintptr_t)ptr;

	_putchar('0');
	_putchar('x');
	sum += converter(num, 16, 1);

	return (sum + 2);
}

/**
 * print_str - prints string
 * @st: variadic arguments
 *
 * Description: this function prints input
 * string printable charcters and for non-
 * printable it prints its hexacode
 *
 * Return: number of printed characters;
 */
int print_str(va_list st)
{
	int i, sum = 0, ascii, rem = 0;
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
			int j = 1;
			char hex[2] = {'0', '0'};

			sum += _putchar('\\');
			sum += _putchar('x');

			while (ascii > 0)
			{
				rem = ascii % 16;
				hex[j--] = rem > 9 ? rem + 55 : rem + 48;
				ascii /= 16;
			}

			sum += _putchar(hex[0]);
			sum += _putchar(hex[1]);
		}
		else
			sum += _putchar(str[i]);
	}

	return (sum);
}

/**
 * print_r - prints string
 * @s: variadic arguments
 *
 * Description: this function prints input
 * string printable charcters and for non-
 * printable it prints its hexacode
 *
 * Return: number of printed characters;
 */
int print_r(va_list s)
{
	size_t i, strSize = 0;
	char *str;

	str = va_arg(s, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	strSize = strlen(str);

	for (i = strSize; i > 0; i--)
	{
		_putchar(str[i - 1]);
	}

	return (strSize);
}
