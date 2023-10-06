#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Code prints all base 16 characters'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char start = 'a';
char end = 'f';
char letter;
int num;
for (num = 0; num < 10; num++)
{
	putchar(num + '0');
}
for (letter = start; letter <= end; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
