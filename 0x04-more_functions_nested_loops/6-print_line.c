#include "main.h"

/**
* print_line - draws a line
* @n: is the number of lines to be drawn
* Return: void
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
