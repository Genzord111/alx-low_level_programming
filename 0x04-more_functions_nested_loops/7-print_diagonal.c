#include "main.h"
/**
* print_space - draws a right angle triangle
* @end: integer that accounts for the spaces
* Return: void
*/

void print_space(int end)
{
	int j;

	if (end > 1)
	{
		for (j = 1; j < end; j++)
		{
			_putchar(' ');
		}
	}
}

/**
* print_diagonal - draws a right angle triangle
* @n: integer that accounts for the height of diagonal
* Return: void
*/
void print_diagonal(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			if (n > 0)
			{
				print_space(i);
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
