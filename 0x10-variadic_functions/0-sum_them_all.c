#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: number of integer argument passed
* Return: integer
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
		result += va_arg(args, unsigned int);

	va_end(args);
	return (result);
}
