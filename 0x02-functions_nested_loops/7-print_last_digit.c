#include <stdio.h>
/**
 *  print_last_digit - outputs the last number of an input
 * @num: the number to be specified
 * Return: result
 */

int print_last_digit(int num)
{
	int result;
	result = num % 10;
	printf("%d", result);
	return (result);
}
