#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to be iterated over
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int test;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		test = cmp(array[i]);

		if (test == 1)
		{
			return (i);
		}
	}

	return (-1);
}
