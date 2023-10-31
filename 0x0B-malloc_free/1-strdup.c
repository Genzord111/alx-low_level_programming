#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _strdup - returns a pointer to a copy of a string
* @str: string parameter
* Return: pointer to buffer
*/

char *_strdup(char *str)
{
	char *new;
	
	if (str == "")
	{
		_putchar('');
		_putchar('\n');
	}
	if (str == NULL)
		return (NULL);
	
	new = (char *)malloc((strlen(str) * sizeof(char)) - 1);
	
	strcpy(new, str);
	return (new);
}
