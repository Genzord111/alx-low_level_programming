#include "main.h"
/**
 * _islower - checks if ASCII value is lower case
 * @c: integer declare
 * Return: void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
