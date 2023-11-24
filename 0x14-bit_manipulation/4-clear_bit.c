#include "main.h"

/**
 *  clear_bit - sets the value of a bit to 0 at a given index.
 *  @n: binary to be reset
 *  @index: binary position to be changed
 *  Return: 1 if successful or -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1UL << index);

	*n &= mask;

	return (1);
}
