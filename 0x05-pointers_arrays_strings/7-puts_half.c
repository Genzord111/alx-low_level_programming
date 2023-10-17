#include <string.h>
#include "main.h"
/**
* puts_half - prints half the index values in a string
* @str: is a pointer to an string variable
* Return: void
*/

void puts_half(char *str)
{
  size_t i;
  size_t start;
  char p3[500];

  strcpy(p3, str);
  if ( strlen(p3) % 2 == 0)
  {
    start = strlen(p3) / 2;
  }
  else
    start = (strlen(p3) -1) / 2;

  for (i = start; i < strlen(p3); i++)
  {
    _putchar(p3[i]);
  }
  _putchar('\n');
}
