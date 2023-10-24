#include "main.h"
#include <stddef.h>

/**
* _strpbrk - gets the length of a prefix substring.
* @s: string to be checked
* @accept: string containing char to be checked against
* Return: string
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
