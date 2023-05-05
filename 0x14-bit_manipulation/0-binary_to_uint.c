#include "main.h"

/**
 * binary_to_uint - COnverta binary no to an unsigned int. (Hence uint)
 * @b: A pointer to a string of 0 and 1 chars
 * Return: Always 0 if b is NULL or contain 0 or 1 - 0 else the converted no
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, binary = 1;
	int len;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * binary;
		binary *= 2;
	}

	return (num);
}
