#include "main.h"
/**
* print_space - prints the space before the '#'
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
* print_hash - prints the '#'
* @start: integer that accounts for number of '#'
* Return: void
*/
void print_hash(int start)
{
	int j;

	for (j = 1; j < start; j++)
	{
		_putchar('#');
	}
}

/**
* print_diagonal - draws a right angle triangle
* @n: integer that accounts for the height of diagonal
* Return: void
*/
void print_triangle(int size)
{
	int i;
	int n;

	if (size >= 1)
	{
		n = size;
		for (i = 1; i <= size; i++)
		{
			if (size > 0)
			{
				print_space(n);
				n--;
				print_hash(i);
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
