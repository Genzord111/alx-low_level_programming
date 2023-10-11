#include <stdio.h>
/**
 * times_table - finds the multipplication table for 0-9
 * myresult - prints the result of a multiplication
 * @i -function parameter
 * @j -function parameter
 * Return: void
 */
int myresult(int i, int j)
{
	int result;

	result = j * i;
	if (result <= 9)
	{
		_putchar(result + '0');
	}
	else
	{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	return (result);
}
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j < 9)
			{
				result = myresult(j, i);
				if (j < 9 && result <= 9 && !(((j + 1) * i) / 10 > 0))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
				result = myresult(j, i);
		}
		_putchar('\n');
	}
}
