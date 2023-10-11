#include <stdio.h>

/**
* main - Entry point
* Description: 'Prints the sum of even fibonacci numbers
* @void: takes no parameters
* Return: returns 0 (Success)
*/

int main(void)
{
	long int i;
	long int num2 = 2;
	long int num1 = 1;
	long int result = 0;
	long int total = num2;

	for (i = 1; i <= 48; i++)
	{
		if (result <= 4000000)
		{
			result = num2 + num1;
			num1 = num2;
			num2 = result;
			if (result % 2 == 0)
			{
				total = total + result;
			}
		}
	}
	printf("%ld", total);
	putchar('\n');
	return (0);
}
