#include <stdio.h>
#include <stdlib.h>

/**
 ** check - changes string to integer
 * @str: pointer to string to be changed
 * Return: integer
*/

int check(char *str)
{
	int num = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + (str[i] - 48);
			return (num);
		}
		else 
			return (-32);
	}
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
		if (a == -32; || b == -32)
			printf("Error \n");
		else
		{
			result = a * b;
			printf("%d\n", result);
		}
	}
	else
		printf("Error \n");
	return (0);
}
