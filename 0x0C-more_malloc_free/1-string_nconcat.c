#include <stdlib.h>
#include "main.h"

/**
* string_nconcat -  a function that concatenates two strings.
* @s1: parameter indicating pointer to first string
* @s2: parameter indicating pointer to second string
* @n: parameter indicating size of s2 to be concatenated
* Return: pointer to concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int total_len = 0;
	unsigned int i;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	total_len = len1 + n;

	result = malloc(total_len + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
		for (i = 0; i < n; i++)
		{
			result[len1 + i] = s2[i];
		}

		result[total_len] = '\0';

		return (result);
	}
