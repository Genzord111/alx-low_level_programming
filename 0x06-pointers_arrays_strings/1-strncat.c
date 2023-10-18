#include <string.h>
#include "main.h"

/**
* _strncat - concats a certain byte from a source string to a dest
* @dest: destination string parameter
* @src: source string parameter
* @n: number of characters of src to be appended
* Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
	long int start;
	long int j = 0;
	char *p;
	int added_space;

	if (n < strlen(dest))
	{
		added_space = strlen(dest) + n;
	}
	else
		added_space = (strlen(dest)) + (strlen(src));
	p = dest;

	for (start = (strlen(dest)); start < added_space; start++)
	{
		dest[start] = src[j];
		j++;
	}
	return (dest);
}
