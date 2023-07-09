#include "main.h"

/**
 * get_bit - This will return the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n  = n >> index;
	if (n & 1)
		return (1);
	else
		return (0);
}
