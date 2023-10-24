#include <string.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be checked
 * @accept: string containing char to be checked against
 * Return: integer value
 */

unsigned int _strspn(char *s, char *accept)
{
	int num = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					num += 1;
				}

			}
		}
		else
			break;
	}

	return (num);
}
