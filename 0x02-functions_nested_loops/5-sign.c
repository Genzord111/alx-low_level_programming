#include "main.h"
/**
 * print_sign - prints whether a number is positive and negative
 * @n: an integer
 * Return: void
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
