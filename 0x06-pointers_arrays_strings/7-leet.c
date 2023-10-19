#include <string.h>
#include "main.h"
#include <stdio.h>

/**
* leet - encodes a string with integers
* @str: parameter for the function
* Return: character
*/

char *leet(char *str)
{
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};
	int i;
	char lalpha;
	char ualpha;
	int j;
	int k;

	for (i = 0; i < 5; i++)
	{
		lalpha = lower[i];
		ualpha = upper[i];
		j = num[i];

		for (k = 0; k < (int)strlen(str); k++)
		{
			if (str[k] == lalpha || str[k] == ualpha)
			{
				str[k] = j;
			}
			else
				str[k] = str[k];
		}
		k = 0;
	}
	return (str);
}
