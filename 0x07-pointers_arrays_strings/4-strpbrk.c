#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
* _strpbrk - gets the length of a prefix substring.
* @s: string to be checked
* @accept: string containing char to be checked against
* Return: string
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int f;
	int k = 0;
	static char str[500];

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f = i;
			}
		}
		if (f > -1)
		{
			break;
		}
	}
	while (s[f] != '\0')
	{
		str[k] = s[f];
		f++;
		k++;
	}
	return (str);
}
