#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array.
 * @array: array to be iterated over
 * @action:  is a pointer to the function you need to use
 * @size: the size of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
