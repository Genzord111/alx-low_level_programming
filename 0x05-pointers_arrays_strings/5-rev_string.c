#include <stdio.h>
#include <string.h>
/**
* rev_string - is a function that prints a string in reverse
* @s: is a pointer to an string variable
* Return: void
*/

void rev_string(char *s)
{
	long int i;
	long int j = 0;
	char p3[500];
	char p2[500];

	strcpy(p3, s);

	for (i = (strlen(p3) - 1); i > 0; i--)
	{
		p2[j] = p3[i];
		j++;
	}
	strcpy(s, p2);
}
