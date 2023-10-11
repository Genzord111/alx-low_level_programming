#include <stdio.h>
/**
* myresult - returns the multiplication of two integers
* @i: is first integer function parameter
* @j: is second integer function parameter
* Return: result
*/

int myresult(int i, int j)
{
	int result;

	result = j * i;
	if (result <= 9)
	{
		putchar(result + '0');
	}
	else if (result > 9 && result < 100)
	{
		putchar((result / 10) + '0');
		putchar((result % 10) + '0');
	}
	else
	{
		putchar((result / 100) + '0');
		putchar(((result / 10) % 10) + '0');
		putchar((result % 10) + '0');
	}
	return (result);
}
/**
* print_times_table - prints the result of a multiplication
* @n: is the parameter whose multiplication is calculated
* Return: void
*/

void print_times_table(int n)
{
	int num = n;
	int i;
	int j;
	int result;

	if (num < 15 || num < 0)
	{
		for (i = 0; i <= num; i++)
		{
			for (j = 0; j <= num; j++)
			{
				if (j < num)
				{
					result = myresult(j, i);
					if (j < num && result <= 9 && !(((j + 1) * i) / 10 > 0))
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					else if (j < num && (result < 100) && !(((j + 1) * i) / 10 >= 10))
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
}
