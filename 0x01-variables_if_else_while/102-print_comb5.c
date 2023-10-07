#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Code displays combination of two digits'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int start = 0;
int end = 10;
int i;
int j;
int x;
int y;
for (x = start; x < end; x++)
{
	for (y = start; y < end; y++)
	{
		putchar(x + '0');
		putchar(y + '0');
		putchar(' ');
		for (i = start; i < end; i++)
		{
			for (j = start; j < end; j++)
			{
				if (!(i == 9 && j == 9 && x == 9 && y == 8))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(',');
				}
				else
				{
					putchar(i + '0');
					putchar(j + '0');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
