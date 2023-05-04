#include "main.h"

/**
 * binary_to_uint - convert or change binary to unsigned int
 * @b: binary
 * Return: unsigned unit
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, j;
	unsigned int num = 0, not_binary = 0;

	if (b == NULL)
		return (not_binary);

	while (b[len] != '\0')
			len++;
	len -= 1;

	j = 0;
	while (b[i])
	{
		if((b[j] != '0') && (b[j] != '1'))
			return (not_binary);

		if ([j] == '1')
			num += (1 *(1 << len));
		j++;
		len --;
	}

	return (num);
}
