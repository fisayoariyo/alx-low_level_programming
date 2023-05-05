#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: If b is NULL or is not 0 or 1 - 0. Else - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	if (b == NULL)
		return 0;
	while (b[i] == '0' || b[i] == '1')
	{  /**Found another digit.**/
		num <<= 1;
		num += b[i]-'0';
		i++;
	}
	return (num);
}
