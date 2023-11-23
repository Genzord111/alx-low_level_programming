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
	char *str;
	unsigned int value;
	unsigned int i;

	str = (char *)malloc(strlen(b));
	if (b == NULL)
		return (0);

	if (str == NULL)
		return (0);

	strcpy(str, b);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == '0')
		{
			value += (0 << (strlen(str) - i - 1));
		}
		else if (str[i] == '1')
		{
			value += (1 << (strlen(str) - i - 1));
		}
		else
			return (0);
	}

	free(str);
	return (value);
}
