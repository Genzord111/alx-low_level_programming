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
char start = 'a';
char end = 'z';
char letter;
for (letter = start; letter <= end; letter++)
{
	if (letter == 'q' || letter == 'e')
{
	continue;
}
else
{
	putchar(letter);
}
}
putchar('\n');
return (0);
}
