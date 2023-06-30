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

int converter(long dec, int base, int lower)
{
	char digits[64] = {'0'};
	unsigned int sum = 0, u_dec;
	int i;

	if (dec == 0)
		return (_putchar('0'));
	if (dec > UINT_MAX)
	{
		dec %= UINT_MAX;
		dec--;
	}
	if (dec > 0)
	{
		for (i = 0; dec > 0; i++)
		{
			digits[i] = dec % base;
			alpha_hex(digits, i, base, lower);
			dec /= base;
		}

	}
	else
	{
		u_dec = dec;
		for (i = 0; u_dec > 0; i++)
		{
			digits[i] = u_dec % base;
			alpha_hex(digits, i, base, lower);
			u_dec /= base;
		}
	}
	
	for (i = i - 1; i >= 0; i++)
		sum += _putchar(digits[i] + '0');
	
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
	long num;

	num = va_arg(n, long);

	return (converter(num, 2, 0));
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
	long num;

	num = va_arg(n, long);

	return (converter(num, 8, 0));
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
	long num;

	num = va_arg(n, long);

	return (converter(num, 16, 1));
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
	long num;

	num = va_arg(n, long);

	return (converter(num, 16, 0));
}
