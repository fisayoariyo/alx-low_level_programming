#include "main.h"
#include <stdio.h>

/**
 *get_endianness- to check the endianness.
 *
 * Return: 0 if big endian
 *        1 if small endian
 */


int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
