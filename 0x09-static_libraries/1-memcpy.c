#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @src: source file
 * @dest: destination file
 * @n: buffer byte to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
