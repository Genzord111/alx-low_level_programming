#include <stdio.h>
/**
* main - first entry point
* Description: 'Prints sum of multiples of 3 and 5 below 1024'
* @void: takes no parameter
* Return: result
*/

int main(void)
{
	int num = 10;
	int i;
	int total = 0;

	for (i = 1; i < num; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			total = total + i;
		}
	}
	printf("%d", total);
	putchar('\n');
}
