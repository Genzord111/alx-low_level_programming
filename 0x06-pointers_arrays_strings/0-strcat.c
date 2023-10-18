#include <string.h>
#include "main.h"

/**
* _strcat - appends a string from a source to a destination
* @dest: destination parameter
* @src: source parameter
* Return: void
*/

char *_strcat(char *dest, char *src)
{
	long int start;
	long int j = 0;
	long int added_space = strlen(src) + strlen(dest);
	char *p;

	p = dest;

	for (start = (strlen(dest)); start < added_space; start++)
	{
		dest[start] = src[j];
		j++;
	}
return (dest);
}
