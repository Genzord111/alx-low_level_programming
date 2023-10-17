#include <stdio.h>
#include <string.h>

/**
* _strcpy - is a function that prints a string in reverse
* @dest: is a pointer to the string copied into
* @src: is a pointer to the string copied from
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
	long int i;
	long int j = strlen(src);

	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
