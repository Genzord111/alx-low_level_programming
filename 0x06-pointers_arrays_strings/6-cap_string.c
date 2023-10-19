#include <string.h>
#include "main.h"
#include <stdio.h>

/**
* string_toupper - changes all text to uppercase
* @str: is a pointer to an string
* Return: string
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i++)
	{
		if ((int)str[i] > 96 && (int)str[i] < 123)
		{
			str[i] = (int)str[i] - 32;
		}
	}
	return (str);
}
