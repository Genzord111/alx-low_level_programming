/**
* swap_int - is a function that swaps pointer values
* @a: is a pointer to an integer variable
* @b: is a pointer to an integer variable
* Return: void
*/

void swap_int(int *a, int *b)
{
	int p3 = *a;

	*a = *b;
	*b = p3;
}
