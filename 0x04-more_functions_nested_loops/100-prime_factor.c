#include <stdio.h>
/**
* main - Entry point for program
* @void - takes no parameter
* Return: returns 0 if (SUCCESS)
*/
int main(void)
{
	long long int i = 2;
	long long int num = 612852475143;
	long long int value = num;

	while (num / i != 1)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		else
			i++;
	}
	printf("%lld\n", num);
	return (0);
}
