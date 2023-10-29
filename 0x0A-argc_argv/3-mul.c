#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 ** check - changes string to integer
 * @str: pointer to string to be changed
 * Return: integer
*/

int check(char *str)
{
	int num = 0;
	int i = 0;
	int sign = 1;

	if (str[0] == '-')
	{
		sign = -1;
		i = 1;
	}


	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + (str[i] - 48);
		}
		else
			return (INT_MIN);
	}
	return (num * sign);

}

/**
 * main - check the code
 * @argc: counts the number of arguments
 * @argv: prints out arguments passed
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc == 3)
	{
		a = check(argv[1]);
		b = check(argv[2]);

		if (a == INT_MIN || b == INT_MIN)
			printf("Error \n");
		else
		{
			result = a * b;
			printf("%d\n", result);
		}
	}
	else
	{
		printf("Error \n");
		return (1);
	}

	return (0);
}
