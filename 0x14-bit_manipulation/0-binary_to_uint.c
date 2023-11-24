#include <string.h>
#include <stdlib.h>
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * b: pointer to string containing binary
 * Return: converted value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int i;

	if (b == NULL)
		return (0);
	
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] == '0')
		{
			value += (0 << (strlen(b) - i - 1));
		}
		else if (b[i] == '1')
		{
			value += (1 << (strlen(b) - i - 1));
		}
		else
			return (0);
	}
	
	return (value);
}
