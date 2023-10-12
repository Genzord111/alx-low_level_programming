#include "main.h"
/**
* _isdigit - returns 1 if char is a digit
* @c: is first integer function parameter
* Return: integer
*/

int _isdigit(int c)
{
	int num = c;

	if (num >= 48 && num <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
