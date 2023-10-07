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
for (i = start; i < end; i++)
{

	for (j = start; j < end; j++)
	{
		if (i < j)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 9 && j == 9))
			{
				putchar(',');

		}
	}
}
putchar('\n');
return (0);
}
