#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
* str_concat - returns a pointer to concatenation of strings
* @s1: string content is copied into
* @s2: string content is copied out from
* Return: pointer to concatenated string
*/

char *str_concat(char *s1, char *s2)
{

	unsigned int size = strlen(s1) + strlen(s2) + 1;
	char *p = (char *)malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	if (s1 == NULL && (s2 == NULL)
	{
		strcpy(p, " ");
	}
	if (s1 == NULL)
	{
		strcpy(p, " ");
		strcat(p, s2);
	}
	if (s2 == NULL)
	{
		strcpy(p, s1);
		strcat(p, " ");
	}

	return (p);
}
