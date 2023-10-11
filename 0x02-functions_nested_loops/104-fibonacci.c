#include <stdio.h>
/**
* main - Entry point
* Description: 'Prints first 98 fibonacci numbers'
* @void: takes no parameters
* Return: returns 0 (Success)
*/

int main(void)
{
	long long i;
	long long num2 = 2;
	long long num1 = 1;
	long long result;

	printf("1, 2, ");
	for (i = 1; i <= 96; i++)
	{
		result = num2 + num1;
		num1 = num2;
		num2 = result;
		printf("%ld", result);
		if (i < 96)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
