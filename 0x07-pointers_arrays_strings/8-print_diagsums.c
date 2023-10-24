#include <stdio.h>
#include "main.h"

/**
* print_number - breaks down numbers > 9 to be printed by putchar
* @n: is integer parameter
* Return: void
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}
	if ((num / 10) != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

/**
* print_diagsums - finds the sum of diagonals of the matrix
* @a: is a pointer to an array typecast to 1D
* @size: dimension of 2D array
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i;
	int k;
	int n = size;
	int x = (size - 1);
	int first = 0;
	int sec = 0;

	for (i = 0; i < (size * size); i++)
	{
		first += a[i];
		i += n;
	}
	print_number(first);
	_putchar(',');
	_putchar(' ');

	for (k = x; k < (size * size) - 1;)
	{
		sec += a[k];
		k += x;
	}
	print_number(sec);
	_putchar('\n');
}
