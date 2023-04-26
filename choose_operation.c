#include "main.h"
/**
 * chs_op - choose function corrosponding to input char
 * @s: character input
 *
 * Return: pointer to a function "operation"
 */

int (*chs_op(char s))(va_list v_arg)
{
	int i;
	s_op op[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};

	i = 0;
	while (op[i].str && op[i].str[0] != s)
		i++;

	return (op[i].f);
}
