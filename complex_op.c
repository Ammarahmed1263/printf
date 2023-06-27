#include "main.h"

int countStr(char* str){
        int counter = 0;
        
	while(str[counter++] != '\0');
        
	return (counter);
}

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
		{
			sum += _putchar(str[i]);

		}
	}

	return (sum);
}

int print_r(va_list s){
        int i, strSize = 0;
        char *str;

        str = va_arg(s, char*);
        
	if(str == NULL){
                str = "(null)";
        }
        
	strSize = countStr(str) - 1;
        for(i = strSize; i >= 0; i--){
                _putchar(str[i]);
        }

        return (strSize);
}
