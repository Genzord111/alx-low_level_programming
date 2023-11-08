#include "function_pointers.h"

/**
 * print_name - prints the a string from the pointer to a function
 * @name: string containing name parameter
 * @f: pointer to a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
