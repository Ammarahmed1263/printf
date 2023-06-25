#include "main.h"

/**
 * converter - convert number to given base
 * @dec: variadic arguments
 * @base:binary, hexadeciaml or octal
 * @lower:lowercase or uppercase
 *
 * Description: this function converts from
 * decimal to one of the three other bases (
 * binary, hexa (lower or upper) and octal)
 *
 * Return: sum of charactters printed
 */

int converter(va_list dec, int base, int lower)
{
	long num, rem, sum = 0;
	char digits[64];
	char upper[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
	int i = 0;

	num = va_arg(dec, long);

	while (num > 0)
	{
		digits[i] = num % base;

		if (digits[i] > 9 && base == 16)
		{
			rem = digits[i] % 10;

			if (lower == 0)
				digits[i] = upper[rem] - '0';
			else
				digits[i] = upper[rem] + 32 - '0';
		}

		num /= base;
		i++;
	}

	i--;
	while (i >= 0)
		sum += _putchar(digits[i--] + '0');

	return (sum);
}

/**
 * print_bin - prints binary conversion
 * @n: variadic arguments
 *
 * Description: converts int to binary
 *
 * Return: 1 on sucess and -1 on fail
 */

int print_bin(va_list n)
{
	return (converter(n, 2, 0));
}
/**
 * print_oct - prints octal conversion
 * @n: variadic arguments
 *
 * Description: converts int to octal
 *
 * Return: 1 on sucess and -1 on fail
 */

int print_oct(va_list n)
{
	return (converter(n, 8, 0));
}

/**
 * print_hex - prints lower hex conversion
 * @n: variadic arguments
 *
 * Description: converts int to hex in lowercase
 *
 * Return: 1 on sucess and -1 on fail
 */

int print_hex(va_list n)
{
	return (converter(n, 16, 1));
}

/**
 * print_hex_u - prints upper hex conversion
 * @n: variadic arguments
 *
 * Description: converts int to hex in uppercase
 *
 * Return: 1 on sucess and -1 on fail
 */

int print_hex_u(va_list n)
{
	return (converter(n, 16, 0));
}
