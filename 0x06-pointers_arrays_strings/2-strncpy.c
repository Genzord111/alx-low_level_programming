#include <string.h>
#include "main.h"

/**
* _strncpy - copies a nu of bite of a string to another
* @dest: destination string parameter
* @src: source string parameter
* @n: number of characters of src to be copied
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (int)strlen(src))
		{
			dest[i] = src[i];
		}
		if (i >= (int)strlen(src))
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
