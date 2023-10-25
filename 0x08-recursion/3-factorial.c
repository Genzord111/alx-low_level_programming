#include "main.h"

/**
*  factorial -  finds the factorial of a num > 0
* @n: integer variable
* Return: integer
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n >= 0)
	{
		if (n == 0)
		{
			return (1);
		}
		else
			return (n * factorial(n - 1));
	}
}
