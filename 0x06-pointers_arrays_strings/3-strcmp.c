#include <string.h>
#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string parameter
* @s2: second string parameter
* Return: compute
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int compute = 0;

	for (i = 0; i < strlen(s1); i++)
	{
		if ((int)s1[i] != (int)s2[i])
		{
			compute = (int)s1[i] - (int)s2[i];
			break;
		}
	}
	return (compute);
}
