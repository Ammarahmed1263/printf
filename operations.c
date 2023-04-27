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
 * Return: number of printed characters
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
 * Return: number of printed characters
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
        long p, m, i, j, sum = 0, flag = 0;
	int arr[64] = {0};

        p = va_arg(n, long);

	if (p < 0)
	{
		p *= -1;
		p--;
		flag = 1;
	}

	if (p == 0)
	{
		sum += _putchar('0');
		return(sum += _putchar('0'));
	}

	m  = 0;
        while (p > 0)
	{
		arr[m] = p % 2;
		p /= 2;
		m++;
	}

	if (flag)
	{
		for (j = 31; j >= 0; j--)
		{
			if (arr[j] == 0)
				arr[j] = 1;
			else
				arr[j] = 0;

			sum += _putchar(arr[j] + '0');
		}
	}
	else
	{
		for (i = m - 1; i >= 0; i--)
			sum += _putchar(arr[i] + '0');
	}
	return (sum);

}
