#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Code prints a-z in reverse'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char start = 'z';
char end = 'a';
char n;
for (n = start; n >= end; n--)
{
	putchar(n);
}
putchar('\n');
return (0);
}
