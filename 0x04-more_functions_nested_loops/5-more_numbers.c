#include "main.h"

/**
* more_numbers - prints numbers 0-9
* Return: void
*/

void more_numbers(void)
{
	int i;
	int j;
	int first;
	int sec;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			first = i / 10;
			sec = i % 10;
			if (i > 9)
				_putchar(first + '0');
			_putchar(sec + '0');
		}
		_putchar('\n');
	}
}
