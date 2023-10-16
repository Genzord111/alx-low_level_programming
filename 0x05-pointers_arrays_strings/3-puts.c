#include <string.h>
/**
* _puts - is a function that prints a string to standard output
* @str: is a pointer to an string variable
* Return: void
*/

void _puts(char *str)
{
	int i;
	char p3[100];

	strcpy(p3, str);
	for (i = 0; i < strlen(p3); i++)
	{
		_putchar(p3[i]);
	}
	_putchar('\n');
}
