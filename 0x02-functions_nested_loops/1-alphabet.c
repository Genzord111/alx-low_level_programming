#include "main.h"

/**
 * print_alphabet - prints a-z 
 *
 * Return: void
 */
void print_alphabet(void)
{
	char start = 'a';
	char end = 'z';
	int i;
	for (i = start; i <= end; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
