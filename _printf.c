#include "main.h"
/**
 * _printf - prints input
 * @format: string that specifies input structure
 * @...: variadic parameters
 *
 * Return: number of output charcters
 * on fail returns -1;
 */
int _printf(const char *format, ...)
{
	int i, sum = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				sum += _putchar(format[i + 1]);
			else
			{
				if (chs_op(format[i + 1]))
				{
					sum += (*chs_op(format[i + 1]))(args);
				}
				else
					sum += _putchar(format[i]) + _putchar(format[i + 1]);
			}
			i += 2;
		}
		else
		{
			sum += _putchar(format[i]);
			i++;
		}
	}
	return (sum);
}
