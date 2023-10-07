#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Code displays differnt combination of 3 digits'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int start = 0;
int end = 10;
int i;
int j;
int k;
for (i = start; i < end; i++)
{
	for (j = start; j < end; j++)
	{
		for (k = start; k < end; k++)
		{
			if (j < k && i < j)
			{
				if (!(i == j || i == k || j == k))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (!(i == 9 && j == 9 && k == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
