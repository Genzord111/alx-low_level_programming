#include "main.h"

/**
* _memset - is a function that updates the value pointed to
* @s: pointer to an array
* @b: constant string variable
* @n: is a pointer to an integer variable
* Return: void
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
