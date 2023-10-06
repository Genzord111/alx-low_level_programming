9.
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Code prints 1 - 0'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int start = 0;
int end = 10;
int i;
for (i = start; i < end; i++)
{
	if (i < 9)
{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
}
else
{
	putchar(i + '0');
}
}
putchar('\n');
return (0);
}
