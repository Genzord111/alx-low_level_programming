#include <string.h>
/**
* _strlen - function that find the length of a string
* @s: is a pointer to an integer variable
* Return: void
*/

int _strlen(char *s)
{
	char p3[500];

	strcpy(p3, s);
	return (strlen(p3));
}
