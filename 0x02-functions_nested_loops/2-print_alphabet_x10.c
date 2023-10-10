#include "main.h"
/**
 * print_alphabet_x10 - prints a to z ten 10times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char start = 'a';
	char end = 'z';
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = start; i <= end; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
