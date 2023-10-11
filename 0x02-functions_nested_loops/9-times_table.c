#include <stdio.h>
/**
 * myresult - prints the result of a multiplication
 * @num1 - is first function parameter
 * @num2 - is second function parameter
 * Return: result
 */
int myresult(int num1, int num2)
{
	int result;

	result = num1 * num2;
	if (result <= 9)
	{
		putchar(result + '0');
	}
	else
	{
		putchar((result / 10) + '0');
		putchar((result % 10) + '0');
	}
	return (result);
}
/**
 * times_table - finds the multipplication table for 0-9
 * @void: no parameters needed
 * Return: void
 */
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
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
				result = myresult(j, i);
		}
		putchar('\n');
	}
}
