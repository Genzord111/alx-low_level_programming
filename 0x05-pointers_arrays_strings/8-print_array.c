#include <stdio.h>
#include "main.h"
/**
* print_array - prints the n indexes of an array
* @n: is a pointer to an integer variable
* @a: is a pointer to an integer array
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
