#include <string.h>
#include "main.h"
/**
* print_rev - is a function that prints a string in reverse
* @s: is a pointer to an string variable
* Return: void
*/

void print_rev(char *s)
{
	int i;
	char p3[100];

	strcpy(p3, s);
	for (i = strlen(p3); i >= 0; i--)
	{
		_putchar(p3[i]);
	}
	_putchar('\n');
}
