#include <stdio.h>
/**
* main - Entry point for program
* @void: no parameter expected
* Return: void
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i < 100)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
				putchar(' ');
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
				putchar(' ');
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
				putchar(' ');
			}
			else
			{
				printf("%d", i);
				putchar(' ');
			}
		}
		else
			printf("Buzz");
	}
	putchar('\n');
	return (0);
}
