#include "main.h"

/**
* print_rev_recursion - reverses and prints string
* @s: is a pointer to an string variable to be reversed
* Return: void
*/

void _print_rev_recursion(char *s);
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
