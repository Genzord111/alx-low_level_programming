#include "main.h"

/**
* _pow_recursion - finds the power of a number
* @x: base number variable
* @y: exponent variable
* Return: integer
*/

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x *  _pow_recursion(x, y - 1));
	}
	return (-1);
}
