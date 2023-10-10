#include "main.h"
/**
 * _isalpha - checks if ASCII value is lower case
 * @c: integer declare
 * Return: void
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
