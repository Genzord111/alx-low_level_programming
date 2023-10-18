#include <string.h>
#include "main.h"

/**
* reverse_array - reverses the content of an array
* @a: array passed as a parameter
* @n: size of array
* Return: dest
*/
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int my_arr[500];

	for (i = 0; i < n; i++)
	{
		my_arr[j] = a[i];
		j--;
	}

	for (i = 0; i < n; i++)
	{
		a[i] = my_arr[i];
	}
}
