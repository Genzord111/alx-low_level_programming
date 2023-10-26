#include "main.h"

/**
* find - finds checks if a number other than y is a factor
* @x: number to be checked
* @y: possible factors
* Return: integer
*/

int find(int x, int y)
{
	if (x == 2)
		return (1);
	if (x % y == 0)
	{
		if (y == x)
			return (1);
		return (0);
	}
	else
		return (find(x, y + 1));
}

/**
* is_prime_number - checks for prime number and returns a value
* @n: integer to be checked
* Return: integer
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (find(n, 2) == 1)
		return (1);
	return (0);
}
