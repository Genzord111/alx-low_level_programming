#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Code prints lowercase letters except q and e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int start = 0;
int end = 10;
int num;
for (num = start; num < end; num++)
{
	printf("%d", num);
}
putchar('\n');
return (0);
}
