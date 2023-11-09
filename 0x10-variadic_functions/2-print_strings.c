#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
* print_strings - prints strings including nil types and new line.
* @separator: pointer to word separating element
* @n: number of string argument passed
* Return: integer
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		const char *str = va_arg(args, const char *);

		if (separator != NULL)
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (i < (n - 1))
				printf("%s", separator);
			else
				printf("\n");
		}
	}
	va_end(args);
}
