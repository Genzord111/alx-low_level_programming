#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * convert - changes string to integer
 * @str: pointer to string to be changed
 * Return: integer
*/

int convert(char *str)
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
 * Return: int 0 (SUCCESS).
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i;
	int x;
	int count = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (convert(argv[i]) != INT_MIN)
			{
				result = result + convert(argv[i]);
				x = 1;
			}
			else
				x = 0;
			count = count + x;
		}
		if (count == (argc - 1))
			printf("%d\n", result);
		else
		{
			printf("Error \n");
			return (1);
		}
	}
	else
		printf("0\n");
	return (0);
}
