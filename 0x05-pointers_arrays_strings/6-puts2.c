#include <string.h>
#include "main.h"
/**
* puts2 - prints every other character
* @str: is a pointer to an integer variable
* Return: void
*/

void puts2(char *str)
{
	size_t i;
	char p3[300];

	strcpy(p3, str);
	for (i = 0; i < strlen(p3); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(p3[i]);
		}
	}
	_putchar('\n');
}
