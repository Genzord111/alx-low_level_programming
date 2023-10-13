#include "main.h"

/**
* print_number - prints integer with putchar
* @n: integer to be printed
* Return: void
*/

void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar(45);
	}
	if ((n / 10) != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
