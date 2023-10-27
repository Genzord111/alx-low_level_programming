#include "main.h"

/**
* _isupper - return 1 if the character is uppercase
* @c: is first integer function parameter
* Return: int
*/

int _isupper(int c)
{
	int num = c;

	if (num >= 65 && num <= 90)
	{
		return (1);
	}
	else
		return (0);
}
