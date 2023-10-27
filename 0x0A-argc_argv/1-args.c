#include <stdio.h>

/**
 * main - check the code
 * @argc: counts the number of arguments
 * @argv: prints out arguments passed
 * Return: Always void
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d", (argc - 1));
	putchar('\n');

	return (0);
}

