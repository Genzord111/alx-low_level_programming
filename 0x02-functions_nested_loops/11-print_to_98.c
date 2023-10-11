#include <stdio.h>
/**
 * print_to_98 - prints from a higher or lower num to 98
 * @n: a variable containing number
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			putchar(i + '0');
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			putchar(i + '0');
			if (i > 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
		putchar(n);
}
