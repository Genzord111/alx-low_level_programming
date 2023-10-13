#include <stdio.h>
/**
* main - Entry point for program
* Description: 'Prints the largest prime factor of 612852475143'
* @void: takes no parameter
* Return: returns 0 if (SUCCESS)
*/
int main(void)
{
	long int i = 2;
	long int num = 612852475143;

	while (num / i != 1)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		else
			i++;
	}
	printf("%ld\n", num);
	return (0);
}
