#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Display all lowercase letters on a line'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
char start = 'a';
char end = 'z';
char letter;
for (letter = start; letter <= end; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
