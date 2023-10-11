#include <stdio.h>
/**
* main - Entry point
* Description: 'Prints first 50 fibonacci numbers'
* @void: takes no parameters
* Return: result
*/

int main(void)
{
	long int i;
	long int num2 = 2;
	long int num1 = 1;
	long int result;
	long int num;

	printf("1 ,2, ");
	for (i = 1; i <= 48; i++)
	{
		result = num2 + num1;
		num1 = num2;
		num2 = result;
		printf("%ld", result);
		if (i < 48)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
