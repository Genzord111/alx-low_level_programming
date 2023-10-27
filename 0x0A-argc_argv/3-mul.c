#include <stdio.h>
#include <stdlib.h>

/*
* check - cchanges string to integer
* @str: pointer to string to be changed
* Return: integer
*/

int check(char *str)
{
int num = 0;

for (int i = 0; str[i] != '\0'; i++)
{
if ((int)str[i] >= 30 && (int)str[i] >= 30)
num = (num * 10) + (str[i] - 48);
}
return num;
}

/**
 * main - check the code
 * @argc: counts the number of arguments
 * @argv: prints out arguments passed
 * Return: Always 0.
 */

int main( int argc, char *argv[])
{
	int a;
	int b;
	int i;
	int result;

	if (argc == 3)
	{
		a = check(argv[1]);
		b = check(argv[2]);
		result = a * b;
		printf("%d\n",result);
	}
	else
		printf("Error");
}
