#include "main.h"
/**
 * _abs - finds the absolute value of a function
 * @num: a variable containing number
 * Return: void
 */

int _abs(int num)
{
	if (num < 0)
	{
		num = -1 * num;
		return (num);
	}
	return (num);

}
