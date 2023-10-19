#include <string.h>
#include "main.h"
#include <stdio.h>

/**
* check - checks if parameter is an escape character
* @str: charcter variable to be checked
* Return: 0 if (SUCCESS)
*/

int check(char str)
{
	switch (str)
	{
		case ' ':
			return (0);
		case ',':
			return (0);
		case '.':
			return (0);
		case '{':
			return (0);
		case '}':
			return (0);
		case '?':
			return (0);
		case '!':
			return (0);
		case '(':
			return (0);
		case ')':
			return (0);
		case '\t':
			return (0);
		case '\n':
			return (0);
		case '"':
			return (0);
		case ';':
			return (0);
	}
	return (1);
}

/**
* cap_string - checks if parameter is an escape character
* @str: string variable to be checked
* Return: str string
*/

char *cap_string(char *str)
{
	int i;
	int size = (int)strlen(str);

	if ((int)str[0] > 96 && (int)str[0] < 123)
		str[0] = (int)str[0] - 32;

	for (i = 1; i < size; i++)
	{
		if (i > 0 && check(str[i - 1]) == 0 && (str[i] > 96 && str[i] < 123))
			str[i] = (int)str[i] - 32;
	}
	return (str);
}
