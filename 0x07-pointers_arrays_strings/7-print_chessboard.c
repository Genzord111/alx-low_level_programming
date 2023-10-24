#include "main.h"

/**
*  print_chessboard - prints the chessboard.
* @a: is a pointer to an array of size 8
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
