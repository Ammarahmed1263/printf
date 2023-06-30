#include "main.h"

/**
 * alpha_hex - print hex corr. to number
 * @arr
 *
 *
 *
 *
 *
 */
void alpha_hex(char *arr, int x, int base, int l)
{
	char upper[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	unsigned int rem;

	if (arr[x] > 9 && base == 16)
	{
		rem = arr[x] % 10;
		
		if (l == 0)
			arr[x] = upper[rem] - '0';
		else
			arr[x] = upper[rem] + 32 - '0';
	}
}
