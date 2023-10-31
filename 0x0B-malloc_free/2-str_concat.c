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

	unsigned int size = strlen(s1) + strlen(s2);
	char *p = (char *)malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);
	strcpy(p, s1);
	strcat(p, s2);

	return (p);
}
