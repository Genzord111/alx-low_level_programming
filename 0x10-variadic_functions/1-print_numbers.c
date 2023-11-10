#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: pointer to word separating element
* @n: number of integer argument passed
* Return: integer
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(args, unsigned int));
		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);
		else
			printf("\n");
	}
}
