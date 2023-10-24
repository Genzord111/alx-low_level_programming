#include "main.h"
#include <stddef.h>

/**
* _strchr - counts the number of char in f present in a prefix of s
* @s: is a pointer to a string literal
* @c: is a pointer to a string literal
* Return: character or void
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
return (NULL);
}
