#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Code checks if number is positive, negative or zero'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
char start = 'a';
char end = 'z';
char upper_start = 'A';
char upper_end = 'Z';
char letter;
for (letter = start; letter <= end; letter++)
{
	putchar(letter);
}
for (letter = upper_start; letter <= upper_end; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
