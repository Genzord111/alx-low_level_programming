#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 * @argc: counts the number of arguments
 * @argv: prints out arguments passed
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", (argv[i]));
		putchar('\n');
	}

	return (0);
}
