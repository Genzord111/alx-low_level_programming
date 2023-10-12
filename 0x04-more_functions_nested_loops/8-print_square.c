#include "main.h"
/**
* print_square - prints a square of '#'
* @size: size of square
* Return: void
*/

void print_square(int size)
{
	int i;
	int j;
	int k;

	if (!(size <= 0))
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				for (k = 0; k < 1; k++)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
