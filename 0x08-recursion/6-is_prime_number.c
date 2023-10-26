#include "main.h"

/**
* root - sister function to _sqrt
* @x: number variable initially entered
* @y: number which increases till a value is returned in _sqrt
* Return: integer
*/

int root(int x, int y)
{
	if ((y * y) == x)
		return (y);
	else if ((y * y) > x)
		return (-1);

	return (root(x, y + 1));
}

/**
* _sqrt_recursion - finds the square root of a natural number
* @n: integer whose root is found
* Return: integer
*/

int _sqrt_recursion(int n)
{
	if (root(n, 0) == -1)
		return (-1);

	return (root(n, 0));
}
